#include <stdio.h>                                  
#include <string.h>                                                                                                                                                                          

#define MAX_CAND_CNT 20
#define MAX_NAME_LEN 32
struct ballot_counter_s {
    int count;
    char name[MAX_NAME_LEN];
} counter[MAX_CAND_CNT];
int cand_cnt;

void count(const char *name);
const char *winner();

int main()
{
    scanf("%d", &cand_cnt);
    for (int i = 0; i < cand_cnt; i++) {
        scanf("%s", counter[i].name);
        counter[i].count = 0;
    }


    char name[MAX_NAME_LEN];
    while (scanf("%s", name) != EOF) //如果還沒掃完
        count(name);

    for (int i = 0; i < cand_cnt; i++)
        printf("%s %d\n", counter[i].name, counter[i].count);

    printf("%s\n", winner());

    return 0;
}
void count(const char *name)
{
	for(int i = 0; i < cand_cnt; i++) {
		if(strcmp(name , counter[i].name) == 0){
			counter[i].count++ ;
			break ;
		}
	}
}

const char *winner()
{
	int temp[20];
	for(int i = 0 ; i < cand_cnt ; i++){
		temp[i] = counter[i].count ;
	}
	for(int i = 0 ; i < cand_cnt ; i++){
		for(int j = 0 ; j < cand_cnt - i - 1 ; j++){
			if(temp[j] > temp[j + 1]){
				int tem = temp[j] ;
				temp[j + 1] = tem ;
				temp[j] = temp[j + 1] ;
			}
		}
	}
	for(int i = 0 ; i < cand_cnt ; i++){
		if(temp[cand_cnt - 1] == counter[i].count){
			return counter[i].name ;
			break ;
		}
	}
	return "0" ;
}