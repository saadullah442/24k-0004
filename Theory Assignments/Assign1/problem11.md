# Description
Take input two positive integers
Calulate all the factors of the smallest number
Check if the these factors are factors of second number
If they both have HCF of other than 1 then they are not coprime numbers ( HCF is always one )
Else they are comprime numbers

# Pseudocode

Input num1, num2
smallestNum = 0
hcfCount = 0
count = 1
If num1< num2 {
  smallestNum = num1
}
Else {
  largestNum = num2
}

While count <= largestNum {
  If num1 % count == 0 {
    If num2 % count == 0 {
      hcfCount = hcfCount + 1
    }
  }
}

If hcfCount > 1 {
  Print "Numbers not coprime"
} 
Else {
  Print "Numbers coprime"
}

