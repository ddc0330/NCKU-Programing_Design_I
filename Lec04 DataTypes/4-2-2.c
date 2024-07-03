#include<stdio.h>
int main () {
    unsigned n;
    scanf("%d",&n);
    unsigned byte[5];
    byte[4] = n % (16*16);
    byte[3] = n % (16*16*16*16);
    byte[3] = byte[3] >> 8;
    byte[2] = n % (16*16*16*16*16*16);
    byte[2] = byte[2] >> 16;
    byte[1] = n >> 24;
    unsigned d[5];
    unsigned temp = 0; //unsign 表示全部32個位元都是數字的部分 int只有31個
    unsigned ans;
    for(int i = 1;i<=4;i++){
        scanf("%d",&d[i]);
    }
    temp = (byte[d[1]] ^ byte[d[2]]) << 24; //step 1
    temp = temp + ((byte[d[2]] & byte[d[3]]) << 16); //step 2
    temp = temp + ((byte[d[1]] | byte[d[3]]) << 8); //step 3
    temp = temp + (~(byte[d[4]]) - 0xffffff00); //step 4
    unsigned tempp = temp;
    temp = temp >> (d[1] + d[2] + d[3] + d[4]);
    tempp = tempp << (32 - (d[1] + d[2] + d[3] + d[4]));
    temp = tempp + temp;  //step 5
    tempp = temp >> 16;
    temp = temp % 0x000010000;
    temp = temp ^ tempp;

    printf("%d",temp);
    return 0;
}
