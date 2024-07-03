#include<stdio.h>
float point(int,int);
int main () {
    char a[3];
    float totald = 0.00,totalu = 0.00;
    
    scanf("%c",&a[0]);

    while (1){
        scanf("%c",&a[1]);
        scanf("%c",&a[2]);
        if (a[2] == '+' || a[2] == '-'){

            float f = a[0] - '0';
            totald += f;
            f = f * point(a[1],a[2]);
            totalu += f;
            scanf("%c",&a[0]);
        }
        else{
            float f = a[0] - '0';
            totald += f;
            f = f * point(a[1],0);
            totalu += f;
            a[0] = a[2];
        }
        if (a[0] == '\n' || a[1] == '\n' || a[2] == '\n'){
            break;
        }
    }
    float ans = 0.00;
    ans = totalu / totald;
    printf("%.2f",ans);
}


float point(int a,int b){
    if (a == 'A' && b == '+')
        return 4.30;
    else if (a == 'A' && b == 0)
        return 4.00;
    else if (a == 'A' && b == '-')
        return 3.70;
    else if (a == 'B' && b == '+')
        return 3.30;
    else if (a == 'B' && b == 0)
        return 3.00;
    else if (a == 'B' && b == '-')
        return 2.70;
    else if (a == 'C' && b == '+')
        return 2.30;
    else if (a == 'C' && b ==0)
        return 2.00;
    else if (a == 'C' && b == '-')
        return 1.70;
    else if (a == 'F' && b == 0)
        return 0.00;
    else {
        return 0.00;
    }
}