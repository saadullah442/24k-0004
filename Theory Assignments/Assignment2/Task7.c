#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int main(){
	
	int word_exists = 0;
	char word[10] = {'\0'};
	char arr[6][5];
	int i,j;
	srand(time(NULL));
	int rand_num = rand();
	
	// Populating 2D array with random characters
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			rand_num = ( (rand()) % (90 - 65 + 1) + 65);
			arr[i][j] = (char)rand_num;
		}
	}
	
	
	// Printing 2D array
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			if (j==0) printf("|");
			printf("%c|", arr[i][j]);
		}
		printf("\n");
		for(j=0;j<5;j++){
			if (j==0) printf(" ");
			printf("- ");
		}
		printf("\n");
	}
	

	
	
	// Taking input word to search 
	printf("Enter word: ");
	gets(word);
	
	int l=0;
	// Traversing individual letters in word
	while(word[l] != '\0'){
		word_exists = 0;
		//checking if word exists in 2D array
		for(i=0;i<6;i++){
			for(j=0;j<5;j++){
				if (word[l] == arr[i][j]) word_exists = 1;
			}
		}
		
		// Getting out of array if a letter is not found
		if (word_exists == 0) break;
		l++;
	}
	
	if(word_exists == 0){
		printf("%s doesn't exists\n", word);
	} else{
		printf("%s exists\n", word);
	}
	
	// Printing 2D array
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			if (j==0) printf("|");
			printf("%c|", arr[i][j]);
		}
		printf("\n");
		for(j=0;j<5;j++){
			if (j==0) printf(" ");
			printf("- ");
		}
		printf("\n");
	}
	//Printing my roll-number
	printf("|0|0|0|4|");
	
	return 0;
}
