#include<stdio.h>
int main () {
    double a[5] = {0},aa = 0;
    for(int i = 0;i<5;i++){
        scanf("%lf",&a[i]);
    }
    aa = a[1] * a[2] * a[3] * a[4] * a[0];
    printf("%.15lf",aa);
    return 0;
}