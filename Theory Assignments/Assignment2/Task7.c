#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int main(){
	
	char word[10] = {'\0'};
	char arr[6][5];
	int i,j;
	srand((unsigned int)time(2));
	int rand_num = rand();
	
	// Populating 2D array with random characters
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			srand((unsigned int)time(i*j) );
			rand_num = ( (rand() + 65) % 90 )+ 1;
			arr[i][j] = (char)rand_num;
		}
	}
	
	
	// Printing 2D array
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	

	
	
	// Taking input word to search 
	printf("Enter word: ");
	gets(word);
	
	return 0;
}
