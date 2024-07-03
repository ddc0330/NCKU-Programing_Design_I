#include <stdio.h>
int n ;
int form[150][150] ;
int first[300] ;
int after[300][300] ;
int times[300]; //times[1] 放第一行有幾個論文
int ti[300] ; 
void ss(int x , int y ) ;
int main(void){
    scanf("%d\n" , &n) ;
    int line = 1 ;
    while(1){
        scanf("%d" , &first[line] );
        if(first[line] == 0){
            break ;
        }
        getchar();
        int num = 0;
        while(1){
            char u ;
            u = getchar() ;
            if(u == '\n'){
                after[line][times[line]] = num ;
                num = 0 ;
                times[line]++ ;
                break ;
            }
            else if(u == ' '){
                after[line][times[line]] = num ;
                num = 0 ;
                times[line]++ ;  
            }
            else{
                num *= 10 ; 
                num = u - '0' + num ;
            }
        }
        line++ ;        
    }
    for(int i = 1 ; i <= line - 1; i++){    //把一開始就能確定的先放上1
        for(int j = 1 ; j <= times[i] ; j++){
            form[first[i]][after[i][j-1]] = 1 ;
        }
    }
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(form[i][j] == 1){
                ti[i]++ ; //22214
            }
        }
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            ss(i , j) ;
        }
    }

    for(int i = 1 ; i <= n ; i++){
        form[i][i] = 1 ;
    }

    for(int i = 1 ; i <= n ; i++){
        printf("%d -> " , i);
        for(int j = 1 ; j <= n; j++){
            if(form[i][j] == 1){
                printf("%d " , j) ;
            }
        }
        printf("\n") ;
    }

}
void ss(int x , int y ){
    if(form[x][y] == 1){
        for(int l = 1 ; l <= n ; l++){
            if(form[y][l] == 1){
                form[x][l] = 1 ;
                ss(x , l) ;
            }
        }
    }
}
