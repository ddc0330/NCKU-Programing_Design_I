#include<stdio.h>
int ddc(char a){
    if (a <='9' && a>='0'){
        return (a -'0');
    }
    else if (a<='f' && a >= 'a'){
        return (a - 'a' + 10);
    }
    return 0;
}

int main () {
    char a[8];
    int b[4];
    for(int i = 0;i<4;i++){
        scanf("%c",&a[i*2 ]);
        scanf("%c",&a[i*2+1]);
        b[i] = ddc(a[i*2])*16 + ddc(a[i*2 + 1]);
    }
    for(int i = 0;i<3;i++){
        printf("%d",b[i]);
        printf(".");
    }
    printf("%d",b[3]);
    return 0;
}
