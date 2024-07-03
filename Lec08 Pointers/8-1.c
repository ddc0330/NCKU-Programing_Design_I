#include <stdio.h>
int ll[32] ;
int mm[32] ;
int nn[32] ;
int main(void){
    float a , b ;
    scanf("%f%f" , &a , &b) ;
    int *aa , *bb ;
    aa = (int* )&a ;
    bb = (int* )&b ; //用int指標去抓的東西一定是int，但他的bitwise不會變，所以*aa就是能拿來算的
    int AA , BB ;
    AA = (int)a ;
    BB = (int)b ; //用C本身轉int的方式就可以拿到int
    int ans ; 
    ans = *aa + *bb ;
    for(int i = 0 ; i < 32 ; i++){
        ll[i] = (*aa >> i) & 0x1 ;
    }
    for(int i = 0 ; i < 32 ; i++){
        mm[i] = (*bb >> i) & 0x00000000000000000000000000000001 ;
    }
    for(int i = 0 ; i < 32 ; i++){
        nn[i] = (ans >> i) & 0x00000000000000000000000000000001 ;
    }
    printf("   ");
    for(int i = 31 ; i >= 0 ; i--){
        printf("%d" , ll[i]) ;
        if(i == 24 || i == 16 || i == 8 ){
            printf(" ") ;
        }
    }
    printf("\n+) ");
    for(int i = 31 ; i >= 0 ; i--){
        printf("%d" , mm[i]) ;
        if(i == 24 || i == 16 || i == 8 ){
            printf(" ") ;
        }
    }
    printf("\n");
    for(int i = 0 ; i < 39 ; i++)
        printf("-");
    printf("\n   ") ;
    for(int i = 31 ; i >= 0 ; i--){
        printf("%d" , nn[i]) ;
        if(i == 24 || i == 16 || i == 8 ){
            printf(" ") ;
        }
    }
    printf("\n") ;
    printf("%d + %d = %d" , AA , BB , ans) ;
    return 0;
}
