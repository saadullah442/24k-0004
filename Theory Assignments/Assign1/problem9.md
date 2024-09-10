# Pseudocode
Declare DOBmonth, Currentmonth As Int
Declare DOBday, Currentday, DOByear, Currentyear As Int
Declare Isleapyear, Isoddmonth, Ismonthworng, Isevenmonth As Boolean
Input DOByear, Currentyear, DOBday, Currentday, DOBmonth, Currentmonth As Int
Count = 1
Isoddmonth = False
Isevenmonth = False
Ismonthwrong = False
Isleapyear = False


Function Checkday() {
  If count == 1 {
    day = Currentday
    If isoddmonth == True {
      While day > 31
        Input Currentday
        day = Currentday
    }
    Else {
      While day > 30
        Input Currentday
        day = Currentday
    }
  }
  Else {
    day = DOBday
    If isoddmonth == True {
      While day > 31
        Input DOBday
        day = DOBday
    }
    Else {
      While day > 30
        Input DOBday
        day = DOBday
    }
  }
}



Function Checkleapyear() {
  If count == 1 {
    year = Currentyear
  } 
  Else {
    year = DOByear
  }
  if ((year % 4 == 0 && year % 400 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 != 0 && year % 100 != 0)) 
  {
    Isleapyear = true;
    printf("Leap year\n");
    if (count == 1) {
      printf("count in 1 in leapyear\n");
      while (Currentday > 29) {
        Input Currentday
      }
    }
    else {
      while (DOBday > 29) {
        Input DOBday        
      }
    }
  } 
  else {
    printf("Not a leap year\n");
    Isleapyear = false;
    if (count == 1) {
      printf("count in 1 in leapyear\n");
      while (Currentday > 28) {
        Input currentday
      }
    }
    else {
      while (DOBday > 28) {
        Input DOBday       
      }
    }
}


Function Checkmonth() {
  If count == 1 {
    month = Currentmonth
  }
  Else {
    month = DOBmonth
  }
  
  If month != 01 {
    If month != 02 {
      If month != 03 {
        If month != 04 {
          If month != 05 {
            If month != 06 {
              If month != 07 {
                If month != 08 {
                  If month != 09 {
                    If month != 10 {
                      If month != 11 {
                        If month != 12 {
                          Ismonthwrong = True
                          Ismonthwrong = False
                        } 
                        Else {
                          Ismonthwrong = False
                          Isoddmonth = False
                          Isevenmonth = True
                        }
                      }
                      Else {
                        Ismonthwrong = False
                        Isoddmonth = True
                        Isevenmonth = False
                      }
                    }
                    Else {
                      Ismonthwrong = False
                      Isoddmonth = False
                      Isevenmonth = True
                    }
                  }
                  Else {
                    Ismonthwrong = False
                    Isoddmonth = True
                    Isevenmonth = False
                  }
                }
                Else {
                  Ismonthwrong = False
                  Isoddmonth = False
                  Isevenmonth = True
                }    
              }
              Else {
                Ismonthwrong = False
                Isoddmonth = True
                Isevenmonth = False
              }
            }
            Else {
              Ismonthwrong = False
              Isoddmonth = False
              Isevenmonth = True
            }
          }
          Else {
            Ismonthwrong = False
            Isoddmonth = True
            Isevenmonth = False
          }
        } 
        Else {
          Ismonthwrong = False
          Isoddmonth = False
          Isevenmonth = True
        }
      }
      Else {
        Ismonthwrong = False
        Isoddmonth = True
        Isevenmonth = False
      }
    } 
    Else {
      Ismonthwrong = False
      Checkleapyear()
      Isoddmonth = False
      Isevenmonth = False
    }
  } 
  Else {
    Ismonthwrong = False
    Isoddmonth = True
    Isevenmonth = False
  }
}

 


While Currentyear < DOByear {
  Input Currentyear, DOByear
}


While count <= 2 {
  Checkmonth()
 
  While Ismonthwrong == True {
    if count == 1 {
      Input Currentmonth
    } 
    Else {
      Input DOBmonth
    }
    Checkmonth()
  }

  Checkday()
  count = count + 1
}



If Isleapyear == False {
  If Currentyear - DOByear == 0 {
    Age = 0
  }
  Elseif Currentyear - DOByear > 0 {
    If Currentmonth - DOBmonth == 0 {
      If Currentday - DOBday >= 0 {
        Age = Currentyear - DOByear
      }
    }
    Elseif Currentmonth - DOBmonth > 0 {
      Age = Currentyear - DOByear
    }
    Else {
      Age = (Currentyear - DOByear) - 1
    }
  }
  Print Age
}
Else {
  Yeardiff = Currentyear - DOByear
  If Yeardiff % 4 == 0 {
    divi = yearDiff / 4;
    Age = divi;
  }
  Elseif Yeardiff % 4 == Yeardiff {
   Age = 0
  }
  Print Age
}










