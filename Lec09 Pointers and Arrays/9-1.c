#include <stdio.h>
#define NUM 9
void check_sudoku(int (*grid_p)[NUM]);
int main(void){
    int grid[NUM][NUM]; // sudoku puzzle
    for(int i = 0; i < NUM; ++i){
        for(int j = 0; j < NUM; ++j){
            scanf("%d", &grid[i][j]);
        }
    }
    check_sudoku(grid);
    return 0;
}
void check_sudoku(int (*grid_p)[NUM]){\
    int form[9][9] = {0}; 
    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            for(int l = 0 ; l < 9 ; l++){
                if(l == j){
                    continue;
                }
                else if(grid_p[i][j] == grid_p[i][l]){
                    form[i][j] = 1 ;
                }
            }
            for(int l = 0 ; l < 9 ; l++){
                if(l == i){
                    continue;
                }
                else if(grid_p[i][j] == grid_p[l][j]){
                    form[i][j] = 1 ;
                }
            }
            int x = (i / 3) * 3; 
            int y = (j / 3) * 3; 
            for(int xx = 0 ; xx < 3 ; xx++){
                for(int yy = 0 ; yy < 3 ; yy++){
                    if((x + xx) == i && (y + yy) == j){
                        continue;
                    }
                    else if(grid_p[x+xx][y+yy] == grid_p[i][j]){
                        form[i][j] = 1 ;
                    }
                }
            }
        }
    }
    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            if(form[i][j] == 1 ){
                printf("(%d,%d)\n" , i , j) ;
            }
        }
    }
}