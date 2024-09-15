# Description

Take input from user a number
loop while count != 9 to loop until you find digit 9
Inside first loop
count = 0
Start a second loop while number MOD 10 !== 0 to find what is the last digit
inside second loop

increment count
decrement number
outside second loop

number = number / 10 to make the digit before curren one the last digit
check value of count. The value of count represents the last digit in the number
If count != 9 or count == 0
  divide number by 10 and initialize the value to number 
  add the count value to another variable except for 0 that comes before 9
  intialize count to 0
If count == 9
  add count to number
  add the removed digits to number except the digit 0 coming just before 9
outside second loop



# Pseudocode
  Declare numOfNine, numBeforeZero, number,count,removedNumber, powerCount,   remNumCount, zeroCount As Int
  Declare numCopy, numBefore As Int

  Input number
  
  numOfNine = 0
  numCopy = 0
  numBefore = 0
  count = 0
  powerCount = 0
  zeroCount = 0
  remNumCount = 0
  removedNumber = 0

  numCopy = number
  while(numCopy != 0) {  
    count = 0
    while (numCopy % 10 != 0) {
      numCopy = numCopy - 1
      count = count + 1
    }  
    numCopy = numCopy / 10
    if(count == 9) {
      numOfNine = numOfNine + 1
    }
  }
  
  numCopy = 0
  count = 0
  while (numOfNine != 0) {
    while (count != 9) {
      count = 0
      while (number % 10 != 0) {
        number = number - 1
        count = count + 1
      }
      numBefore = 0
      if (count != 9) { 
        if (count == 0) {
          numCopy = number
          numCopy = numCopy / 10
          while (numCopy % 10 != 0) {
            numCopy = numCopy - 1
            numBefore = numBefore + 1
          }
          if (numBefore != 9) {
            zeroCount = zeroCount + 1
          }
        }
        number = number / 10  
        printf("value of number after division: %d\n", number)  
        removedNumber = removedNumber + ( count * ( (int)(pow(10,powerCount) +1e-9) ) )
        if (numBefore != 9) {
          remNumCount = remNumCount + 1
        }
        if (count == 0) {
          powerCount = powerCount + zeroCount
        } else {
          powerCount = powerCount + 1
        }           	
        zeroCount = 0
      }
      else if( count == 9 && numOfNine != 1) {
        number = number/10
        removedNumber = removedNumber + ( count * ( (int)(pow(10,powerCount) +1e-9) ) )
        powerCount = powerCount + 1
        remNumCount = remNumCount + 1    
      }
      else if (count == 9 && numOfNine == 1) { 
        number = number + count
        number = (number *  (int)(pow(10, remNumCount) +1e-9) ) + removedNumber
      }  
    }
    count = 0
    numOfNine = numOfNine - 1
  }

  Print number
  





