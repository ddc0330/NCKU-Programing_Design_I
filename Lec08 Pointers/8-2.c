#include <stdio.h>

typedef unsigned long long uint64_t;

void fib_fast_doubling(unsigned k, uint64_t *f2k, uint64_t *f2k1);

int main()
{
    unsigned k;
    scanf("%u", &k);

    uint64_t f2k, f2k1;
    fib_fast_doubling(k / 2, &f2k, &f2k1);

    printf("%llu", (k & 0x1) ? f2k1 : f2k); //基數輸出前面，偶數輸出後面

    return 0;
}

void fib_fast_doubling(unsigned k, uint64_t *f2k, uint64_t *f2k1) //偶奇
{
	if(k == 0){
        *f2k1 = 1 ;
    }
    else if (k == 1){
        *f2k = 1 ;
        *f2k1 = 2 ;
    }
    else{
        long long tem = 1 , temp = 2 ;
        for(int i = 0 ; i <= k - 2 ; i++){
            *f2k = temp + tem ;
            tem = *f2k ;
            *f2k1 = tem  + temp ;
            temp = *f2k1 ;
        }
    }
}