# Description 
Take input ride
If ride is "Dragon riller coaster"
Take input age and height
You meet the criteria if height >= 48 and Age >= 10 else you donot meet the criteria
If ride is "Sky swing"
Take input height
You meet the criteria if height >= 54 else you donot meet the criteria
If ride is "Carousel"
Input Age
You meet the criteria if Age >= 5 else you donot meet the criteria

# Pseudocode
Input ride
If ride == "Dragon roller coaster" {
  Input Age, Height
  If Height >= 48 {
    If Age >= 10 {
      Print "You meet the criteria for the" ride
    }
    Else {
      Print "Sorry you do not meet the criteria for" ride 
    }
  }
  Else {
    Print "Sorry you do not meet the criteria for" ride
  }
}
Elseif ride == "Sky swing" {
  Input Height
  If Height >= 54 {
    Print "You meet the criteria for the" ride
  }
  Else {
    Print "Sorry you do not meet the criteria for" ride
  }
}
Else {
  Input Age
  If Age >= 5 {
    Print "You meet the criteria for the" ride
  }
  Else {
    Print "Sorry you do not meet the criteria for" ride
  }
}
