#include <stdio.h>
#include <math.h>
int main() {


  int numBeforeZero, number,count,removedNumber, powerCount,   remNumCount, zeroCount;
  int numCopy, numBefore;

  printf("Enter a number: ");
  scanf("%d", &number); 

  numCopy = 0;
  numBefore = 0;
  count = 0;
  powerCount = 0;
  zeroCount = 0;
  remNumCount = 0;
  removedNumber = 0;
  while (count != 9) {
    count = 0;
    while (number % 10 != 0) {
      number = number - 1;
      count = count + 1;
    }
    printf("Value of count: %d\n", count);
    printf("Value of number: %d\n", number);
    numBefore = 0;
    if (count != 9) { 
      if (count == 0) {

        numCopy = number;
        numCopy = numCopy / 10;
        while (numCopy % 10 != 0) {
          numCopy = numCopy - 1;
          numBefore = numBefore + 1;
        }
        printf("Value of numBefore: %d\n", numBefore);
        if (numBefore != 9) {
          printf("Incremented zero count\n");
          zeroCount = zeroCount + 1;
        }
        
        // zeroCount = zeroCount + 1;

      }
      number = number / 10;
      printf("value of zeroCount: %d\n", zeroCount);
      printf("value of powerCount: %d\n", powerCount);
      removedNumber = removedNumber + ( count * ( (int)(pow(10,powerCount) +1e-9) ) );
      printf("value of removedNumber: %d\n", removedNumber);
      if (numBefore != 9) {
        remNumCount = remNumCount + 1;
      }
      if (count == 0) {
        powerCount = powerCount + zeroCount;
      } else {
        powerCount = powerCount + 1;
      }       
      zeroCount = 0;
    }  
    
    else if (count == 9) { 
      number = number + count;
      printf("IN COUNT == 9\n");
      printf("value of remNumCount: %d\n", remNumCount);
      printf("Last value of removedNumber: %d\n", removedNumber);
      printf("value of number: %d\n", number);

      //  (int)(pow(5, 2)+1e-9)
      printf("Printing power: %d\n", (int)(pow(10, remNumCount) +1e-9));
      printf("Last value of zeroCount: %d\n", zeroCount);
      number = (number *  (int)(pow(10, remNumCount) +1e-9) ) + removedNumber;
    }
  
  }
  printf("%d", number);


}