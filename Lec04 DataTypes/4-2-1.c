#include<stdio.h>
int main () {
    unsigned long long int NUMBER_1 = 0x38E38E38E38E3800;
    unsigned long long int NUMBER_2 = 0x2AAAAAAAAAAAAAAA;
    unsigned long long int NUMBER_3 = 0x1C71C71C71C71C71;
    unsigned long long int a,b,c;
    unsigned long long int ans[3];
    scanf("%llu",&a);
    scanf("%llu",&b);
    scanf("%llu",&c);
    ans[0] = a * NUMBER_1 % 0x7CE66C50E2840000;
    ans[1] = b * NUMBER_2 % 0x7CE66C50E2840000;
    ans[2] = c * NUMBER_3 % 0x7CE66C50E2840000;
    ans[0] = ans[0] + ans[1];
    ans[0] = ans[0] % 0x7CE66C50E2840000;
    ans[2] = ans[0] + ans[2];
    ans[2] = ans[2] % 0x7CE66C50E2840000;
    printf("%llu",ans[2]);
    return 0;
}
