# Description
Take input number
loop while number != 0
Make a nested loop while num % 10 != 0
Inside nested loop decrement number by one and increment count by 1
Inside first loop divide number by 10, sum count and reset count to 0 
Outside loop print sum of count 

# Pseudocode

Declare num,count,sun As Int
Input num
count = 0
sum = 0
While num != 0 {
  While num % 10 != 0 {
    num = num - 1
    coount = count + 1
  }
  num = num / 10
  sum = sum + count
  count = 0
}
Print Sum





