#include <stdio.h>

unsigned long construct(unsigned char parts[16]);

int main()
{
    unsigned char parts[16];
    for (int i = 0; i < 16; i++)
        scanf("%hhx", parts + i);

    printf("%lu", construct(parts));

    return 0;
}
unsigned long construct(unsigned char parts[16])
{
    unsigned long long temp = 0 , tem = 0 ;
    temp += (unsigned long long)parts[7];
    for(int i = 6 ; i >= 0 ; i--){
        temp = temp << 8 ;
        temp += (unsigned long long)parts[i];
    }
    tem += (unsigned long long)parts[15];
    for(int i = 14 ; i >= 8 ; i--){
        tem = tem << 8 ;
        tem += (unsigned long long)parts[i];
    }
    unsigned long long ans = temp ^ tem ;
    return ans;
}