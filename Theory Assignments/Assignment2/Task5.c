#include <stdio.h>

int main(){
	int size;
	int i,j;
	printf("Enter number of values: ");
	scanf("%d", &size);
	
	int values[size];
	int count[size];
	
	for(i=0;i<size;i++){
		printf("Enter any value: ");
		scanf("%d", &values[i]);
		
		printf("Enter count of value: ");
		scanf("%d", &count[i]);
		
	}
	
	printf("Horizontal Histogram\n");
	for(i=0;i<size;i++){
		printf("Value %d: ", values[i]);
		for(j=0;j<count[i];j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("Vertical Histogram\n");
	for(i=0;i<size;i++){
		printf("Vertical Histogram for %d\n", values[i]);
		for(j=0;j<count[i];j++){	
			printf("*");
			printf("\n");
		}
		printf("%d\n", values[i]);
	}
	
	
}
