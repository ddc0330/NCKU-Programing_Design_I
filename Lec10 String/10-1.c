# include <stdio.h>
# include <string.h>

int main(){
    int dis , blo , effcon = 0 , movcon = 0;
    scanf("%d%d" , &dis , &blo) ;
    getchar() ;
    char str[100000] ; 
    gets(str) ;
    
    char move[] = "PATA PATA PATA PON" ;
    char atta[] = "PON PON PATA PON" ;
    char defe[] = "CHAKA CHAKA PATA PON" ;

    
    char *token;
    token = strtok(str, ".,\n");
    int don = 0;
    while(token != NULL) {
        int fuck = 0 ;
        movcon++ ; 
        char tem[100] ;
        if(strcmp(token , move) == 0){
            dis -= 1 ;
            effcon++;
            strcpy(tem , token) ;
        }
        else if(strcmp(token , atta) == 0){
            fuck = 1 ;
            effcon++;
            strcpy(tem , token) ;
        }
        else if(strcmp(token , defe) == 0){
            dis += 1 ;
            effcon++;
            strcpy(tem , token) ;
        }


        if(dis == 0){
            printf("NO %d" , blo) ;
            don = 1 ;
            break ;
        }
        else if(fuck == 1 && dis <= 3){
            blo-- ;
            if(blo == 0){
                printf("YES %d" , effcon) ;
                don = 1 ;
                break ;
            }
        }
        
        if((movcon % 10 == 0) && (strcmp(tem , defe) != 0)){
            printf("NO %d" , blo) ;
            don = 1 ;
            break ;
        }
        token = strtok(NULL, ".,\n");
    }
    if(don != 1)
    printf("NO %d" , blo) ;
    return 0;
}