#include <stdio.h>
#define ARR_MAX 1000
void sort_section(int *ptr, int *qtr);
int main() {
    int N, a, b;
    scanf("%d%d%d", &N, &a, &b);
    int arr[ARR_MAX] = {0};
    for (int i = 0; i < N; i++) {
        scanf("%d", arr + i);
    }
    sort_section(&arr[a], &arr[b]);
    for (int i = 0; i < N; i++) {
        printf("%d ", *(arr + i));
    }
}

void sort_section(int *ptr, int *qtr) {
    int temp ;
    if(ptr < qtr){
        for(int i = 0 ; i < qtr - ptr ; i++){       //對N-1個數字做 //N是qtr - qtr + 1
            for(int j = 0 ; j < qtr - ptr - i ; j++){   //對每一個數字我要做N-1 ... 1
                if(*(ptr + j) > *(ptr + 1 + j)){
                    temp = *(ptr + j);
                    *(ptr + j) = *(ptr + 1 + j);
                    *(ptr + 1 + j) = temp ;
                }
            }
            for(int i = 0 ; i < qtr - ptr + 1 ; i++){
                printf("%d " , *(ptr+i)) ;
            }
            printf("\n") ;
        }
    }
    else{
        int *kk ;
        kk = ptr ; 
        ptr = qtr ; 
        qtr = kk ;
        for(int i = 0 ; i < qtr - ptr ; i++){       //對N-1個數字做 //N是qtr - qtr + 1
            for(int j = 0 ; j < qtr - ptr - i ; j++){   //對每一個數字我要做N-1 ... 1
                if(*(ptr + j) > *(ptr + 1 + j)){
                    temp = *(ptr + j);
                    *(ptr + j) = *(ptr + 1 + j);
                    *(ptr + 1 + j) = temp ;
                }
            }
            for(int i = 0 ; i < qtr - ptr + 1 ; i++){
                printf("%d " , *(ptr+i)) ;
            }
            printf("\n") ;
        }
    }
}
