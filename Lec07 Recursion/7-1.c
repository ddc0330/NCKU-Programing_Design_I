#include <stdio.h>
int ss(int nn);
int n;
int total[21];         //第一行[物品編號](需要用的物品數)
int need[21][21];      //所有物品的第二行[項數][物品編號](要用的物品)
int main()
{
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        scanf("%d",&total[i]);
        if(total[i] == 0){
            total[i] = 1;             //原始物品的數量為1
        }
        else{
            for(int j = 1;j <= total[i];j++){
                scanf("%d",&need[j][i]);
            }
        }
    }
    int k = 0;
    for (int i = 1; i <= n ; i++){
        k += ss(i);
    }
    printf("%d",k);
    return 0;
}
int ss(int nn){
    if(total[nn] == 1){
        return 1;
    }
    else{
        int k = 0;
        for (int i = 1 ; i <= total[nn] ; i++){
            k += ss(need[i][nn]);
        }
        return k;
    }
}