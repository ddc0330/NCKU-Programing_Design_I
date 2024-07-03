#include <stdio.h>

int main(void){
    int c;
    scanf("%d" , &c);
    int l , m ;
    scanf("%d%d", &l , &m);
    int aa[l + 1][m + 1];
    for(int i = 1 ; i <= l ; i++){
        for(int j = 1 ; j <= m ; j++){
            scanf("%d" , &aa[i][j]);
        }
    }
    switch(c){
        case 90:
            for(int i = 1 ; i <= m ; i++){
                for(int j = l ; j >0 ; j--){
                    printf("%d ", aa[j][i]);
                }
                printf("\n");
            }
            break;
        case 180:
            for(int i = l ; i >= 1 ; i--){
                for(int j = m ; j >= 1 ; j--){
                    printf("%d ", aa[i][j]);
                }
                printf("\n");
            }
            break;
        case 270:
            for(int j = m ; j >= 1  ; j--){
                for(int i = 1 ; i <= l ; i++){
                    printf("%d ", aa[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            break;
    }
    return 0;
}
