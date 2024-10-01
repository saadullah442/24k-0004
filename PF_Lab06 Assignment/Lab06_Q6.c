#include <stdio.h>
int main() {

  int i,num, factors, fibNum;
  fibNum = 0;
  factors = 0;
  do{
    printf("Enter number: ");
    scanf("%d", &num);
  }
  while(num <= 1);
  for(i=1;i<=num;i++) {
    if(num%i == 0) {
      factors++;
    }
  }
  if(factors == 2) {
    for(fibNum=0;fibNum<num;fibNum++){
      if(fibNum == 0) {
        printf("0");
      }
      else {
        printf("%d", fibNum + (fibNum + 1));
      }

    }
  }
  else {
    printf("%d is not a prime number", num); 
  }
  

}