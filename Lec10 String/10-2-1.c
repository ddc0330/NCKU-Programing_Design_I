#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_LEN 1024
#define LINE_LEN 128

void convert(char *arr[], int count);
int main() {
	char line[BUFFER_LEN];
	char buffer[LINE_LEN][BUFFER_LEN];
	char *arr[LINE_LEN];

	int count = 0;
	while (fgets(line, BUFFER_LEN - 1, stdin) != NULL) {
		arr[count] = buffer[count];
		strncpy(buffer[count++], line, BUFFER_LEN - 1);
	}
	convert(arr, count);
	for (int i = 0; i < count; i++) {
		printf("%s", arr[i]);
	}
}

void convert(char *arr[], int count){
	for(int i = 0 ; i < count ; i++){
		char temp[128][1024];
    	for(int j = 0 ; j < strlen(arr[i]) - 1 ; j++){
			if(arr[i][j] == ' '){
				strcat(temp[i] , " ") ;
			}
			else if(arr[i][j] == 'z'){
				strcat(temp[i] , "(9)4") ;
			}
			else if(arr[i][j] == 'w'){
				strcat(temp[i] , "(9)1") ;
			}
			else if(arr[i][j] == 'x'){
				strcat(temp[i] , "(9)2") ;
			}
			else if(arr[i][j] == 'y'){
				strcat(temp[i] , "(9)3") ;
			}
			else if(arr[i][j] == 't'){
				strcat(temp[i] , "(8)1") ;
			}
			else if(arr[i][j] == 'u'){
				strcat(temp[i] , "(8)2") ;
			}
			else if(arr[i][j] == 'v'){
				strcat(temp[i] , "(8)3") ;
			}
			else if(arr[i][j] == 'p'){
				strcat(temp[i] , "(7)1") ;
			}
			else if(arr[i][j] == 'q'){
				strcat(temp[i] , "(7)2") ;
			}
			else if(arr[i][j] == 'r'){
				strcat(temp[i] , "(7)3") ;
			}
			else if(arr[i][j] == 's'){
				strcat(temp[i] , "(7)4") ;
			}
			else{
				strcat(temp[i] , "(") ;
				char a[10];
				a[0] = '0' + (arr[i][j] - 'a') / 3 + 2 ;
				strcat(temp[i] , a) ;
				strcat(temp[i] , ")") ;
				a[0] =  '0' + (arr[i][j] - 'a') % 3 + 1;
				strcat(temp[i] , a );
			}
		}
    strcpy(arr[i] , temp[i]) ;
	strcat(arr[i] , "\n") ;
	}
}