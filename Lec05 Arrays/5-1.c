#include<stdio.h>
int main () {
    int discs[7] = {0};
    for(int i =0;i<75;i++){
        int d1=0 ,d2 =0;
        scanf("%d",&d1);
        scanf("%d",&d2);

        if((d2 % 2) == 1){
            discs[d1]++;
        }
        else{
            discs[d1]--;
        }

        if(discs[d1] == -1){
            discs[d1] = 9;
        }
        else if(discs[d1] == 10){
            discs[d1] = 0;
        }

        
    }
    for (int i =0 ;i<6;i++){
            printf("%d ",discs[i+1]);
        }
    
    return 0;
}

