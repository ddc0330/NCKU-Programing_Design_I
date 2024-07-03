#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 4096

void recovery(char *homework);

int main () {
    char homework[MAX_LEN + 1];
    
    // Get the homework content.
    fgets(homework, MAX_LEN , stdin);
    recovery(homework);

    // Print the recovered homework.
    fputs(homework, stdout);

    return 0;
}

void recovery(char *homework) {
    char temp[4097] ;
    char *token;
    token = strtok(homework, " \n");

    while(token != NULL){
        int jud = 0 ; 
        if(strlen(token) > 21 ){ //如果字串長度大於21就不要存
            jud = 81 ; //1就是不要
        }
        else{
            for(int i = 0 ; i < strlen(token) ; i++){
                if((token[i] <= 'z' && token[i] >= 'a') || (token[i] <= 'Z' && token[i] >= 'A' )){
                    
                }
                else if((token[i]== '.' || token[i]== ',' || token[i] == '!' ||token[i]== '?') && (strlen(token) == 1)){
                    jud = 81 ;
                    break ;
                }
                else if((token[i]== '.' || token[i]== ',' || token[i] == '!' ||token[i]== '?')){
                    if(i == strlen(token) - 1){
            
                    }
                    else{
                        jud = 81 ;
                        break ;
                    }
                }
                else{
                    jud = 81 ;
                    break ;
                }
            }
        }


        
        if(jud == 0){
            strcat(temp , token) ;
            strcat(temp , " ") ;
        }
        token = strtok(NULL, " \n");
    }
    strcpy(homework , temp) ;
}