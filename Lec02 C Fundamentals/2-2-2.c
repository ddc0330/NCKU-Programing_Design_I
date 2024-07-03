#include<stdio.h>

int main () {
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    d=a/b;
    c= a - d*b;
    printf("%d %d",d,c);
    return 0;
}