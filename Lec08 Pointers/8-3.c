#include<stdio.h>
#include<stdlib.h>
int array[1500];
int maxChandy( int size) ;
int main() {
    int size = 0;
    scanf("%d", &size);
    for(int i = 0 ; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    printf("%d\n", maxChandy( size));
    return 0;
}
int maxChandy(int size) {
    if (size == 1){
        return array[0];
    }
    else if (size == 2 && (array[0] >= array[1])){ 
        return array[0];
    }
    else if (size == 2 && (array[0] <= array[1])){ 
        return array[1];
    }
    int k = array[size - 1] + maxChandy(size - 2);
    int l = maxChandy(size - 1);
    if (k >= l){
        return k ;
    }
    else{
        return l ;
    }
    return -1;
}
