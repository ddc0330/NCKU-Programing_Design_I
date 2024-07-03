#include<stdio.h>

int main () {
    int a[5],kk;
    for(int i=0;i<6;i++){
    	scanf("%d",&a[i]);
    }
    kk = a[0]+a[1]+a[2];
    if(kk <=10){
    	if(a[3]==a[4] && a[4]==a[5]){
        	printf("Player attacks: Critical Hit");
        }
        else if(a[3]+a[4]>=a[5]){
        	printf("Player attacks: Normal Hit");
        }
        else{
        	printf("Player attacks: Miss");
        }
    }
    else{
        if(a[3]==a[4]||a[4]==a[5]||a[5]==a[3]){
        	printf("Dragon attacks: Miss");
        }
        else if(a[3]+a[4]!=a[5]){
        	printf("Dragon attacks: Normal Hit");
        }
        else{
        	printf("Dragon attacks: Critical Hit");
        }
    }
    return 0;
}
