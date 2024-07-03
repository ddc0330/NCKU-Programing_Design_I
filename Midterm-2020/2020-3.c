#include <stdio.h>

int main(void){
    double a,ans = 1;
    int b;
    scanf("%lf", &a);
    scanf("%d", &b);

    for (int i = 0 ; i < b ; i++){
        ans  = ans * a;
    }
        
    
    printf("%d",(int)ans);
    return 0;
}
