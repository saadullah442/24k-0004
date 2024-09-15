#include <stdio.h>
#include <math.h>
int main() {


  int numOfNine, numBeforeZero, number,count,removedNumber, powerCount,   remNumCount, zeroCount;
  int numCopy, numBefore;

  printf("Enter a number: ");
  scanf("%d", &number); 
  
  numOfNine = 0;
  numCopy = 0;
  numBefore = 0;
  count = 0;
  powerCount = 0;
  zeroCount = 0;
  remNumCount = 0;
  removedNumber = 0;

  numCopy = number;
  while(numCopy != 0) {  
   
    count = 0;
    while (numCopy % 10 != 0) {
      numCopy = numCopy - 1;
      count = count + 1;
    }
   
    numCopy = numCopy / 10;
     
    if(count == 9) {
      numOfNine = numOfNine + 1;

    }
       
  }//while ended
  
  numCopy = 0;
  count = 0;
  while (numOfNine != 0) {

    while (count != 9) {
      count = 0;
      while (number % 10 != 0) {
        number = number - 1;
        count = count + 1;
      }// while ended
    
      numBefore = 0;
      if (count != 9) { 
        if (count == 0) {
          numCopy = number;
          numCopy = numCopy / 10;
          while (numCopy % 10 != 0) {
            numCopy = numCopy - 1;
            numBefore = numBefore + 1;
          }// while ended
       
          if (numBefore != 9) {
         
            zeroCount = zeroCount + 1;
          }// ifended

        }// if count == 0 ended
        number = number / 10;  
        printf("value of number after division: %d\n", number);  
        removedNumber = removedNumber + ( count * ( (int)(pow(10,powerCount) +1e-9) ) );

        if (numBefore != 9) {
          remNumCount = remNumCount + 1;
        }

        if (count == 0) {
          powerCount = powerCount + zeroCount;
        } else {
          powerCount = powerCount + 1;
        }       
        
        zeroCount = 0;
      }// if count != 9 ended
      else if( count == 9 && numOfNine != 1) {
        number = number/10;
        removedNumber = removedNumber + ( count * ( (int)(pow(10,powerCount) +1e-9) ) );
        powerCount = powerCount + 1;
        remNumCount = remNumCount + 1;
        
  
        printf("value of number after division: %d\n", number);
      }
      else if (count == 9 && numOfNine == 1) { 
        number = number + count;
        printf("number * 10Expo: %d\n", (int)(pow(10, remNumCount) +1e-9));
        number = (number *  (int)(pow(10, remNumCount) +1e-9) ) + removedNumber;
      }
       
       printf("numOfNine: %d\n", numOfNine);

       printf("Value of count: %d\n", count);
       printf("value of zeroCount: %d\n", zeroCount);
       printf("value of powerCount: %d\n", powerCount);
       printf("value of remNumCount: %d\n", remNumCount);
      
       
      
       printf("value of number after adding: %d\n", number);
       printf("value of removedNumber: %d\n", removedNumber);

    }// while count != 9
    count = 0;
    numOfNine = numOfNine - 1;
    printf("%d\n", number);
    //printf("numOfNine in while != 0: %d\n", numOfNine);
  }// while numOfNine != 0

  printf("last number: %d", number);

}