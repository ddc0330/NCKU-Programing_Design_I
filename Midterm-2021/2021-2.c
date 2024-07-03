#include <stdio.h>

int main () {
    int n[100000];
    char ad ;
    char aa[100000];
    scanf("%d" , &n[1]);
    n[1] %= 26;
    getchar();
    scanf("%c" , &ad);
    getchar();
    if(ad == 'a'){
        for(int i = 2 ; i <=100000 ; i++){
            n[i] = n[i-1] + 1; 
        }
    }
    else{
        for(int i = 2 ; i <=100000 ; i++){
            n[i] = n[i-1] - 1; 
        }
    }
    int counter = 0;
    int kk = 0;
    for(int i = 1 ; i <= 100000 ; i++){
        scanf("%1c" , &aa[i]);
        if(aa[i] == '\n'){
            break;
        }
        else if(aa[i] == ' '){
            aa[i] = aa[i] ;
        } 
        else if(aa[i] <= 'Z' && aa[i] >= 'A'){
            kk++;
            if((n[kk] % 26) == 0){
                aa[i] = aa[i] ;
            }
            else if((n[kk] % 26) > 0){
                for(int j = 1; j <= (n[kk] % 26) ; j++){
                    aa[i]++;
                    if(aa[i] == ('Z' + 1)){
                        aa[i] = 'A' ;
                    }
                }
            }
            else if((n[kk] % 26) < 0){
                for(int j = -1; j >= (n[kk] % 26) ; j--){
                    aa[i]--;
                    if(aa[i] == ('A' - 1)){
                        aa[i] = 'Z' ;
                    }
                }
            }
            
        }
        else if(aa[i] <= 'z' && aa[i] >= 'a'){
            kk++;
            if((n[kk] % 26) == 0){
                aa[i] = aa[i] ;
            }
            else if((n[kk] % 26) > 0){
                for(int j = 1; j <= (n[kk] % 26) ; j++){
                    aa[i]++;
                    if(aa[i] == ('z' + 1)){
                        aa[i] = 'a' ;
                    }
                }
            }
            else if((n[kk] % 26) < 0){
                for(int j = -1; j >= (n[kk] % 26) ; j--){
                    aa[i]--;
                    if(aa[i] == ('a' - 1)){
                        aa[i] = 'z' ;
                    }
                }
            }
            
            
        }
    counter++; 

    }
    for(int i = 1 ; i <= counter ; i++){
        printf("%c" , aa[i]);
    }
    
    return 0;
}

