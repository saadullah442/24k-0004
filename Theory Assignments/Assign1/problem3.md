# Description

Take province and age as input 
If province is sindh
Check Age > 18
If True then eligible for marriage else not elligible for marriage
If province is punjab
Take Gender as input
If Gender is M
Check Age > 18
If true then eligible for marriage else not elligible for marriage
If Gender is F
Check Age > 16
If true then eligible for marriage else not elligible for marriage


# Pseudocode

Declare Province As String
Declare Age As Int
Declare Gender As Char

Input Province, Age

If Province == "Sindh" {
  If Age > 18 {
    Print "You can marry"
  }
  Else {
    Print "You cannot marry"
  }
}
Else {
  Input Gender
  If Gender == 'M'  {
    If Age > 18 {
      Print "You can marry"
    } 
    Else {
      Print "You cannot marry"
    }
  }
  Else {
    If Age > 16 {
      Print "You can marry"
    } Else {
      Print "You cannot marry"
    }
  }
}
