#include <stdio.h>
int main(void){

    int a;
    scanf("%d", &a);
    char chaa[a];
    int cha[100000];
    getchar();
    for (int i = 0;i<a;i++){
        scanf("%1c", &chaa[i]);
    }
    for (int i = 0;i<a;i++){
        cha[i] = (int)chaa[i] - 'a';
    }
    getchar();
    for (int i = 0;i<1000;i++){
        cha[i + a] = cha[i];
    }

    char kk[1000];
    int counter = 0;


    for (int i = 0;i<1000;i++){

        
        scanf("%c",&kk[i]);
        char temp ;
        if(kk[i] == '\n'){
            for(int j = 0 ;j < i ; j++){
                printf("%c",kk[j]);
            }
            break;
        }
        temp = kk[i] + cha[counter];

        if(kk[i] < 'z' && kk[i] > 'a' && (temp >'z' || temp < 'a')){
            kk[i] = (kk[i] - 26) + cha[counter];
            counter++;
        }
        else if(kk[i] < 'Z' && kk[i] > 'A' && (temp >'Z' || temp < 'A')){
            kk[i] =( kk[i] - 26 )+ cha[counter];
            counter++;
        }
        else if(kk[i] == ' ') {
            kk[i] = kk[i];
        }
        else if(kk[i] == '.') {
            kk[i] = kk[i];
        }
        else if(kk[i] == '!') {
            kk[i] = kk[i];
        }
        else if (kk[i] <'9' && kk[i] > '0'){
            kk[i] = kk[i];
        }
        else{
            kk[i] = temp;
            counter++;
        }
    }
    
    return 0;
}
