#include <stdio.h>

int main(void){

    int n; 
    scanf("%d" , &n);
    int a[n+1][n+1];
    //step 1
    a[1][n/2+1] = 1;
    int countx = 1 ;
    int county = n/2+1 ;

    for (int i = 2 ; i <= (n * n); i++){
        if (countx == 1 && county != n && a[n][county + 1] == 0){
            a[n][county + 1] = i;
            county = county + 1;
            countx = n ; 
        }
        else{
            a[countx - 1][county] = i;
            county = county - 1;
        }
        if (countx != 1 && county == n && a[countx - 1][1] == 0){
            a[countx - 1][1] = i;
            county = 1;
            countx = countx - 1; 
        }
        else{
            a[countx - 1][county] = i;
            county = county - 1;
        }
        if(countx == n && county == n && a[n][1] == 0){
            a[n][1] = i;
            countx = n;
            county = 1;
        }
        else{
            a[countx - 1][county] = i;
            county = county - 1;
        }
        if (a[countx - 1][county + 1] == 0){
            a[countx - 1][county + 1] = i;
            countx = countx - 1;
            county = county + 1;
        }
        else{
            a[countx - 1][county] = i;
            county = county - 1;
        }
        
    }
    printf("%d" , a[1][1]);
    for(int i = 1;i<=n ; i++){
        for(int j = 1;j<=n ; j++){
            printf("%d" , a[i][j]);
        }
    }
    return 0;
}
