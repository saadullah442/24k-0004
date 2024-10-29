#include <stdio.h>
#include <math.h>

int binary_to_decimal(int num){
	int power = 0;	
	int lastdigit = 0;
	int denary = 0;
		
	while(num != 0){
		lastdigit = 0;
		while(num % 10 != 0){
			lastdigit++;
			num--;
			
		}
		num /= 10;
		printf("LastDigit: %d\n", lastdigit);
		if (lastdigit == 1){
		    denary = denary + (int)pow(2.00,(double) power);
		} 
		power++;
		printf("Denary: %d\n", denary);
	}
	return denary;

}


int decimal_to_binary(int num){


	int binary;
	int power = 0;
	        

	while(num != 1){
		printf("10 power; %d\n", (int)pow(10, power));
		binary += (num % 2) * (int)pow(10, power);
		num /= 2;	
		power++;
	}
	binary += (num % 2) * (int)pow(10, power);
	
	
	return binary;
}




int main(){
	// Converting Binary To Decimal
	int binary_num, denary_of_num;
	printf("Enter any binary number: ");
	scanf("%d", &binary_num);	
	denary_of_num = binary_to_decimal(binary_num);
	printf("denary of %d is: %d", binary_num, denary_of_num);	


	// Converting Decimal To Binary
	int decimal_num, binary_of_num;
	printf("Enter any decimal number: ");
	scanf("%d", &decimal_num);	
	binary_of_num = decimal_to_binary(decimal_num);	
	printf("binary of %d is: %d", decimal_num, binary_of_num);	


	return 0;
}