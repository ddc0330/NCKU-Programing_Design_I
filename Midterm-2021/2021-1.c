#include <stdio.h>
int n ;
int ff[50];
int aa[50][6];
int min[50];
int ans[50];
int trans(int a ,int b , int d , int e );
int main(void){
    scanf("%1d%1d" , &aa[0][1] , &aa[0][2] );
    getchar();
    scanf("%1d%1d" , &aa[0][4] , &aa[0][5] );
    scanf("%d" , &n);
    for (int i = 1 ; i <= n ; i++){
        scanf("%d" , &ff[i]);
        scanf("%1d%1d" , &aa[i][1] , &aa[i][2] );
        getchar();
        scanf("%1d%1d" , &aa[i][4] , &aa[i][5]);
        scanf("%d" , &min[i]);
    }
    for(int i = 0 ; i <= n ; i++){
        ans[i] = trans(aa[i][1] , aa[i][2] ,aa[i][4] ,aa[i][5]);
    }
    int temp = 100000;
    int tem = 0 ;
    for (int i = 1 ; i <= n ; i++){
        if (ans[0]<=ans[i]){
            ans[i] = ans[i] + min[i] ;
            if( temp > ans[i]){
                temp = ans[i];
                tem = i;
            }
        }
        else{
            ans[i] = 100000;
        }
    }
    printf("%d" , ff[tem]);
}
int trans(int a ,int b , int d , int e ){
    return a * 600 + b * 60 + d * 10 + e ;
    return -1;
}