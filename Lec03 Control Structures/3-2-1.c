#include<stdio.h>
int main () {
    int max,min,kk;
    scanf("%d",&kk);
    max = kk; min = kk;
    while(kk != -1){
        if(kk > max){
            max = kk;
        }

        if(kk < min){
            min = kk;
        }
    scanf("%d",&kk);
    }
    printf("%d",max - min);
    return 0;
}
