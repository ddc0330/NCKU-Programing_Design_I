#include <stdio.h>

int main(void){
    int k,a[11],b,x,y,z,rr;
    for(int i=0;i<12;i++){
    	scanf("%1d",&a[i]);
    }
    k = a[1]+a[3]+a[5]+a[7]+a[9]+a[11];
    b = a[0]+a[2]+a[4]+a[6]+a[8]+a[10];
    x = k*3 + b;
    y = x-1;
    z = y % 10;
    rr = 9-z;
    printf("%d",rr);
    return 0;
}