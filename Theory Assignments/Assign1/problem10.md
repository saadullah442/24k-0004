# Description
Take input from user a number
Treat number as string
String is made up of array of character so each digit is a character 
Create a while loop which will run until digit 9 is not found
Store index of digit 9 and then add 1 to it
Remove the digit at the new index. The digit removed will be 0

### Second method 

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
If count !== 9 or count === 0
  divide number by 10 and initialize the value to number 
  add the count value to another variable except for 0 that comes before 9
  intialize count to 0
If count === 9
  add count to number
  add the removed digits to number except the digit 0 coming just before 9
outside second loop



# Pseudocode
Declare number,count,removedNumber, powerCount, remNumCount, zeroCount As Int
Input number 
count,powerCount,zeroCount = 0 
While Count != 9 {
  count = 0
  While number MOD 10 != 0 Loop {
    number = number - 1
    count = count + 1
  }
  If count != 9 { 
    removedNumber = removedNumber + ( count * ( 10 ^ powerCount ) )
    remNumCount = remNumCount + 1
    powerCount = powerCount + 1
    powerCount = powerCount + zeroCount
    zeroCount = 0
  }  
  If count == 0 {
    zeroCount = zeroCount + 1
  }
  If count === 9 { 
    number = number + count
    number = (number * (10 ^ remNumCount)) + removedNumber
  }
  number = number / 10
}
Print number
  





