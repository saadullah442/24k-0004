# Description
Take input from user a number
Treat number as string
String is made up of array of character so each digit is a character 
Create a while loop which will run until digit 9 is not found
Store index of digit 9 and then add 1 to it
Remove the digit at the new index. The digit removed will be 0

### Second method 

Take input from user a number
loop while number MOD 10 !== 0
  increment count
  decrement number
check value of count 
If count !== 9 or count === 0
  divide number by 10 and initialize the value to number 
  add the count value to another variable except for 0 that comes before 9
  intialize count to 0
If count === 9
  add count to number
  add the removed digits to number except the digit 0 coming just before 9
  



# Pseudocode
Declare number,count,removednumber, powercount, remnumcount, zerocount As Int
Input number 
While number MOD 10 !== 0 Loop
  number = number - 1
  count = count + 1
If count !== 9 
  number = number / 10
  removednumber = removednumber + ( count * (10 ^ (powercount) ) )
  remnumcount = remnumcount + 1
  powercount = powercount + 1
  powercount = powercount + zerocount
  zerocount = 0
If count === 0
  number = number / 10
  zerocount = zerocount + 1
If count === 9 
  number = number + count
  number = (number * (10 ^ remnumcount)) + removednumber

Print number
  





