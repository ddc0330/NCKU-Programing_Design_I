#include <stdio.h>

int main () {
    int ph = 100,dh = 100;
    int d[10];
    for (int i=1;i<=6;i++){
        scanf("%d",&d[i]);
    }

    while (ph >0 && dh >0){
        if ((d[1] + d[2] + d[3])%2 == 1){ //player attack
            if (d[4]<d[5] && d[5]<d[6]){
                dh -= 25;
            }
            else if(d[4]%2 == d[5]%2 || d[6]%2 == d[5]%2){
                dh -= 5;
            }
        }

        if((d[1] + d[2] + d[3])%2 == 0){
            if (d[5]-d[4]>d[6] || d[4]-d[5]>d[6]){
                ph -= 15;
            }
            else if(d[4] + d[5] != d[6]){
                ph -= 5;
            }
        }

        for (int i=1;i<=6;i++){
                scanf("%d",&d[i]);
            }
    }

    if(ph <=0){
        printf("Dragon wins");
    }
    if(dh <=0){
        printf("Player wins");
    }
    return 0;
}
