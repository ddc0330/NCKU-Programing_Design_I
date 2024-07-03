#include<stdio.h>

int main () {
    int n ; 
    int ll[100] ; 
    char name[100][100];

    scanf("%d" ,&n);
    for (int i = 0 ; i < (n+1) ; i++){
        scanf("%d" , &ll[i]);
        getchar();
        for (int j = 1 ; j <= 20 ; j++){
            scanf("%1c" ,&name[i][j]);
            if (name[i][j] == '\n'){
                name[i][j] = '0' ;
                break;
            }
        }
    }
    for (int i = 0 ; i < (n+1) ; i++){
        for (int j = 1 ; j <= 20 ; j++){
            if (name[i][j] == '0'){
                break;
            }
            else if (name[i][j] <='Z' && name[i][j] >= 'A'){
                name[i][j] = name[i][j] - 'A' + 'a';
            }
        }
    }
    int ans = 1; 
    for(int i = 1 ; i <=n ; i++){ //每個人
        for (int j = 1 ; j <= ll[0] ; j++){ //位數
            if (name[i][j] == '0'){
                ans++;
                break ; 
            }
            else if (name[0][j] == '0'){
                break ; 
            }
            else if(name[0][j] > name[i][j]){
                ans++;
                break;
            }
            else if (name[0][j] < name[i][j]){
                break ;
            }
            else if (name[0][j] == name[i][j]){
                continue ; 
            }
        }
    }
    printf("%d" , ans);
    return 0;
}
