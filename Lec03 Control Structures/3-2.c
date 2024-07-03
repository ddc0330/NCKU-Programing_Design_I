#include <stdio.h>
#define AMERICANO  110
#define LATTE      150
#define CAPPUCCINO 135
#define MOCHA      145

int main() {
	int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==1){
    	printf("The total price is %d dollars!",110*b);	
    }
    else if(a==2){
    	printf("The total price is %d dollars!",150*b);	
    }
    else if(a==3){
    	printf("The total price is %d dollars!",135*b);	
    }
    else if(a==4){
    	printf("The total price is %d dollars!",145*b);	
    }
    else{
    printf("Wait, what?");
    }
    return 0;
}