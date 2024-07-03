#include<stdio.h>
int main () {
    int a[9][9] = {0}; //a行列
    int c[9][9] = {0};
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            scanf("%d",&a[j+1][i+1]);
        }
    }

    for (int i=0;i<64;i++){
        int b = 0;
        scanf("%d",&b);
        for (int i=0;i<8;i++){
            for (int j=0;j<8;j++){
                if (b == a[j+1][i+1]){
                    c[j+1][i+1] = 1;
                }
            }
        }
    }



    int n=0;
    for(int i=1;i<=8;i++){
        int temp = 0;
        for(int j=1;j<=8;j++){
            temp += c[j][i]; 
        }
        if(temp == 8){
            n++;
        }
    }
    for(int i=1;i<=8;i++){
        int temp = 0;
        for(int j=1;j<=8;j++){
            temp += c[i][j]; 
        }
        if(temp == 8){
            n++;
        }
    }
    int k=0;
    for(int i=1;i<=8;i++){
        k += c[i][i];
    }
    if(k==8){
        n++;
    }
    int m = 0;
    for(int i=1;i<=8;i++){
        m += c[9-i][i];
    }
    if(m==8){
        n++;
    }
    printf("%d",n);
    return 0;
}
