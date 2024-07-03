#include <stdio.h>
#include<math.h>
int main(void){
    int a;
    scanf("%d" , &a);
    double l , m , n ;
    double ans;
     
    switch(a){
        case 1:
            scanf("%lf",&l);
            ans = l * l * l;
            break;
        case 2:
            scanf("%lf",&l);
            scanf("%lf",&m);
            scanf("%lf",&n);
            ans = l * m * n;
            break;
        case 3:
            scanf("%lf",&l);
            scanf("%lf",&m);
            ans = 3.14 * l * l * m;
            break;
        case 4:
            scanf("%lf",&l);
            ans = sqrt(2) / 12. * l * l * l ;
            break;
    }
    printf("%.2lf",ans);
    return 0;
}
