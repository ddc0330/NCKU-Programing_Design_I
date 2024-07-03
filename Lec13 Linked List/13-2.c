#include<stdio.h>
#include<stdlib.h>

struct node{
    int value ;
    struct node *next ;
};

int main(){
    struct node *first = NULL ;
    struct node *new , *last ;
    new = malloc(sizeof(struct node)) ;
    int n , m ;
    scanf("%d%d" , &n , &m ) ;
    new->value = n ;
    first = new ;
    last = first ;                      //   new,first->5 4 3 2 1<-last 

    for(int i = n - 1 ; i > 0 ; i--){
        new = malloc(sizeof(struct node)) ;
        new->value = i ;
        new->next = first ;
        first = new ;
    }

    for(int i = 0 ; i < m ; i++){
        printf("%d " , new->value ) ;
        new = new->next ; //new->2
        last->next = new; //last next ->2
        last = new ;      //last
        new = new->next ;
    }

    return 0;
}
