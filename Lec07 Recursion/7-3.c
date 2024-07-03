#include<stdio.h>
#include<math.h>
int n;
int playern[1025];
char playerg[1025];
char judge[11];
char trashcan[2];
int logg(int x);


int main () {
    
    
    scanf("%d",&n);
    scanf("%1c",&trashcan[0]);
    for(int i = 1 ; i <= n ; i++){
        playern[i] = i;
    }
    for(int i = 1 ; i <= n ; i++){
        scanf("%1c",&playerg[i]);
    }
    scanf("%1c",&trashcan[1]);
    for(int i = 1 ; i <= logg(n) ; i++){
        scanf("%1c",&judge[i]);
    }


    for (int i = 1 ; i <= logg(n) ; i ++){
        for (int j = 1 ; j <=  ( n / 2 ); j ++){
            if (playerg[j*2-1] == 'r' && playerg[j*2] == 'p'){
                playerg[j] = playerg[j*2] ;
                playern[j] = playern[j*2] ;
                
            }
            else if (playerg[j*2-1] == 'p' && playerg[j*2] == 's'){
                playerg[j] = playerg[j*2] ;
                playern[j] = playern[j*2] ;
            }
            else if (playerg[j*2-1] == 's' && playerg[j*2] == 'r'){
                playerg[j] = playerg[j*2] ;
                playern[j] = playern[j*2] ;
            }

            else if (playerg[j*2-1] == 'p' && playerg[j*2] == 'r'){
                playerg[j] = playerg[j*2 - 1] ;
                playern[j] = playern[j*2 - 1] ;
            }
            else if (playerg[j*2-1] == 's' && playerg[j*2] == 'p'){
                playerg[j] = playerg[j*2 - 1] ;
                playern[j] = playern[j*2 - 1] ;
            }
            else if (playerg[j*2-1] == 'r' && playerg[j*2] == 's'){
                playerg[j] = playerg[j*2 - 1] ;
                playern[j] = playern[j*2 - 1] ;
            }

            else if (playerg[j*2-1] == 'p' && playerg[j*2] == 'p' && judge[i] == 'b'){
                if(playern[j*2-1] < playern[j*2]){
                    playerg[j] = playerg[j*2] ;
                    playern[j] = playern[j*2] ;
                }
                else{
                    playerg[j] = playerg[j*2-1] ;
                    playern[j] = playern[j*2-1] ;
                }
            }
            else if (playerg[j*2-1] == 'p' && playerg[j*2] == 'p' && judge[i] == 's'){
                if(playern[j*2-1] > playern[j*2]){
                    playerg[j] = playerg[j*2] ;
                    playern[j] = playern[j*2] ;
                }
                else{
                    playerg[j] = playerg[j*2-1] ;
                    playern[j] = playern[j*2-1] ;
                }
            }
            else if (playerg[j*2-1] == 'r' && playerg[j*2] == 'r' && judge[i] == 'b'){
                if(playern[j*2-1] < playern[j*2]){
                    playerg[j] = playerg[j*2] ;
                    playern[j] = playern[j*2] ;
                }
                else{
                    playerg[j] = playerg[j*2-1] ;
                    playern[j] = playern[j*2-1] ;
                }
            }
            else if (playerg[j*2-1] == 'r' && playerg[j*2] == 'r' && judge[i] == 's'){
                if(playern[j*2-1] > playern[j*2]){
                    playerg[j] = playerg[j*2] ;
                    playern[j] = playern[j*2] ;
                }
                else{
                    playerg[j] = playerg[j*2-1] ;
                    playern[j] = playern[j*2-1] ;
                }
            }
            else if (playerg[j*2-1] == 's' && playerg[j*2] == 's' && judge[i] == 'b'){
                if(playern[j*2-1] < playern[j*2]){
                    playerg[j] = playerg[j*2] ;
                    playern[j] = playern[j*2] ;
                }
                else{
                    playerg[j] = playerg[j*2-1] ;
                    playern[j] = playern[j*2-1] ;
                }
            }
            else if (playerg[j*2-1] == 's' && playerg[j*2] == 's' && judge[i] == 's'){
                if(playern[j*2-1] > playern[j*2]){
                    playerg[j] = playerg[j*2] ;
                    playern[j] = playern[j*2] ;
                }
                else{
                    playerg[j] = playerg[j*2-1] ;
                    playern[j] = playern[j*2-1] ;
                }
            }
        }
    }

    printf("%d" , playern[1]) ;
    return 0;
}


int logg(int x){
    if(x == 1){
        return 0 ;
    }
    else if(x == 2){
        return 1 ;
    }
    else if(x == 4){
        return 2 ;
    }
    else if(x == 8){
        return 3 ;
    }
    else if(x == 16){
        return 4 ;
    }
    else if(x == 32){
        return 5 ;
    }
    else if(x == 64){
        return 6 ;
    }
    else if(x == 128){
        return 7 ;
    }
    else if(x == 256){
        return 8 ;
    }
    else if(x == 512){
        return 9 ;
    }
    else if(x == 1024){
        return 10 ;
    }
    return -1;
}
