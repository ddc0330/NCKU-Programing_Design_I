#include<stdio.h>

int main () {
    char a[100000];
    int n;
    scanf("%d",&n);
    scanf("%c",&a[0]); //這很重要 因為換行 我需要把enter放進來
    scanf("%c",&a[1]);
    if (a[1] <= 'z' && a[1] >= 'a'){ //是小寫的話
        a[1] = a[1] - 32;
    }

    int counter = 0,k = 0;
    for (int i = 2;i<100000;i++){
        k = i;
        scanf("%c",&a[i]);        
        if(a[i] == ','||a[i] == ';'||a[i] == '.'){
            a[i] = 10;
            counter += 1;
            if(counter == n){
                break;
            }
        }
        else if(a[i] <= 'z' && a[i] >= 'a'&& (a[i-1] == '\n' || a[i-1] == ' ')){
            a[i] = a[i] - 32;
        }
        else if (a[i] <= 'Z' && a[i] >= 'A' && ((a[i-1] <= 'Z' && a[i-1] >= 'A') || (a[i-1] <= 'z' && a[i-1] >= 'a'))){
            a[i] = a[i] + 32;
        }
    }
    for(int i = 1;i<=k;i++){
        printf("%c",a[i]);
    }
    return 0;
}
