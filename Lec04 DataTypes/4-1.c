#include<stdio.h>
int main () {
    long long n;
    long long s[100001] = {0},ss[100001] = {0};
    scanf("%lld",&n);
    for(int i = 1;i<=n;i++){
        scanf("%lld",&s[i]);
    }
    ss[1] = s[1];
    long long a = 0;
    for(int i = 1;i<=n;i++){
        a = a + s[i];
        ss[i] = a;
    }
    for (int i = 1;i<=n;i++){
        if(ss[i]%s[i] == 0){
            printf("%lld %lld\n",ss[i],s[i]);
        }
    }
    return 0;
}