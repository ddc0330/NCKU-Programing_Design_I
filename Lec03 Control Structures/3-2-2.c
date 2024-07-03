#include <stdio.h>

int main () {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    switch(a){
        case 1:
            for(int i = 0;i<b;i++){
                for(int j = 0;j<b - i;j++){
                    printf("*");
                }
            printf("\n");
            }
            break;
        case 2:
            for(int i = 0;i<b;i++){
                for(int j = 0;j<=i;j++){
                    printf("*");
                }
            printf("\n");
            }
            break;
        case 3:
            for(int i = 0;i<b;i++){
                for(int k = 0;k<i;k++){
                    printf(" ");
                }
                for(int j = 0;j<b - i;j++){
                    printf("*");
                }
            printf("\n");
            }
            break;
        case 4:
            for(int i = 0;i<b;i++){
                for(int k = 0;k< b-i-1;k++){
                    printf(" ");
                }
                for(int j = 0;j<=i;j++){
                    printf("*");
                }
            printf("\n");
            }
            break;
            
    }
    return 0;
}
