#include<stdio.h>
int main () {
    typedef int Strength;
    typedef int Obedience;

    #define INIT_STRENGTH 50
    #define INIT_OBEDIENCE 20

    #define STRENGTH_EAT 5
    #define OBEDIENCE_EAT 2

    #define STRENGTH_TRAIN 4
    #define OBEDIENCE_TRAIN 5

    #define LEARN_STRENGTH 55
    #define LEARN_OBEDIENCE 28
    Strength s = INIT_STRENGTH;
    Obedience o = INIT_OBEDIENCE;

    int times = 0;
    while(1){
        char a;
        scanf("%c",&a);
        if(a == 'e'){
            s += STRENGTH_EAT; 
            o -= OBEDIENCE_EAT;
        }
        else if(a == 't'){
            o += OBEDIENCE_TRAIN; 
            s -= STRENGTH_TRAIN;
        }
        else if(a == '\n'){
            break;
        }

        if ((o >= LEARN_OBEDIENCE) && (s <= LEARN_STRENGTH)){
            times += 1;
            o = INIT_OBEDIENCE;
        }
    }
    if (times >= 5){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}