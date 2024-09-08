# Description
Take input croptype, soilmoisture, hasrained
Check croptype
For croptype == "wheat" irrigation will be possible if soilmoisture < 30 and hasrained is False
else irrigation not possible
For croptype == "Corn" irrigation will be possible if soilmoisture < 40 
else irrigation not possible
For croptype == "rice" irrigation will be possible if soilmoisure < 25 and hasrained is False
else irrigation not possible




# Pseudocode
Declare Croptype As String
Declare Soilmoisture As Int
Declare Hasrained As Boolean

Input Croptype, Soilmoisture, Hasrained
If Croptype == "Wheat" {
  If Soilmoisture < 30 {
    If Hasrainded = False {
      Print "Initiate irrigation"
    }
    Else {
      Print "No irrigation possible"
    }
  }
  Else {
    Print "No irrigation possible"
  }
}
Elseif Croptype == "Corn" {
  If Soilmoisture < 40 {
    Print "Initiate irrigation"
  } Else {
    Print "No irrigation possible"
  }
}
Elseif Croptype == "Rice" {
  If Soilmoisture < 25 {
    If Hasrained == False {
      Print "Initiate irrigation"
    } Else {
      Print "No irrigation possible"
    }
  } 
  Else {
    Print "No irrigation possible"
  }
}
