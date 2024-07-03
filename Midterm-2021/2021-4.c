#include<stdio.h>



int main () {
    double pr[101] , prr[101];
    int n ;
    scanf("%d" , &n);
    double nf = (double) n ;
    int a[101][101] ; //a[page][後面的第N個數字]
    int num[101] ; //要分給幾個放這
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <= n ; j++){
            scanf("%d" , &a[i][j]) ;
            if(a[i][j] == -1){
                num[i] = j - 1;
                break ;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        pr[i] = 1. / nf;
        prr[i] = 0 ;
    }

    for(int k = 0 ; k < 10000 ; k++){
        for(int i = 0 ; i < n; i++){
        for(int j = 1 ; j <= num[i] ; j++){
            prr[a[i][j]] += (pr[i] / (double)num[i]);
            //prr[i] -= (pr[i] / (double)num[i]);    這裡很重要
            }
        }
        for(int k = 0 ; k < n ; k++){
            pr[k] = prr[k] ; 
            prr[k] = 0.0;
        }
    }
    for(int i = 0 ; i < n ; i++){
        pr[i] *= 100.;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%.2f%% " , pr[i]);
    }
    return 0;
}