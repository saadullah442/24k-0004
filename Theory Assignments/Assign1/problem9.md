# Pseudocode
Declare DOBmonth, Currentmonth As Int
Declare DOBday, Currentday, DOByear, Currentyear As Int
Input DOByear, Currentyear, DOBday, Currentday, DOBmonth, Currentmonth As Int
Count = 1
Isoddmonth = False
Isevenmonth = False
Ismonthwrong = False
IsDOBleapyear = False
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

While Currentyear < DOByear {
  Input Currentyear, DOByear
}

If DOByear % 4 == 0 {
  If DOByear % 400 == 0 {
    If DOByear % 100 == 0 {
      IsDOBleapyear = True
    }
  } 
  Else {
    If DOByear % 100 == 0 {
      IsDOBleapyear = True
    } 
    Else {
      IsDOBleapyear = False
    }
  }
} 
Else {
   IsDOBleapyear = False
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

}
Else {
  Yeardiff = Currentyear - DOByear
  If Yeardiff % 4 == 0 {
  
  }
  Elseif Yeardiff % 4 == Yeardiff {
   Age = 0
  }
  Else {
    divi = Yeardiff / 4
    Age = divi
  }
}


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
                          Ismonthwrong = False
                        } 
                        Else {
                          Isoddmonth = False
                          Isevenmonth = True
                        }
                      }
                      Else {
                        Isoddmonth = True
                        Isevenmonth = False
                      }
                    }
                    Else {
                      Isoddmonth = False
                      Isevenmonth = True
                    }
                  }
                  Else {
                    Isoddmonth = True
                    Isevenmonth = False
                  }
                }
                Else {
                  Isoddmonth = False
                  Isevenmonth = True
                }    
              }
              Else {
                Isoddmonth = True
                Isevenmonth = False
              }
            }
            Else {
              Isoddmonth = False
              Isevenmonth = True
            }
          }
          Else {
            Isoddmonth = True
            Isevenmonth = False
          }
        } 
        Else {
          Isoddmonth = False
          Isevenmonth = True
        }
      }
      Else {
        Isoddmonth = True
        Isevenmonth = False
      }
    } 
    Else {
      Checkleapyear()
      Isoddmonth = False
      Isevenmonth = False
    }
  } 
  Else {
    Isoddmonth = True
    Isevenmonth = False
  }
}

Function Checkleapyear() {
  If count == 1 {
    year = Currentyear
  } 
  Else {
    year = DOByear
  }
  
  If year % 4 == 0 {
    If year % 400 == 0 {
      If year % 100 == 0 {
        If count == 1 {
          while Currentday > 29 {
            Input Currentday
          }
        }
        Else {
          while DOBday > 29 {
            Input DOBday 
          }
        }
      } 
      Else {
      }
    } 
    Else {
      If year % 100 == 0 {
        If count == 1 {
          while Currentday > 29 {
            Input Currentday
          } 
        }
        Else {
          while Currentday > 28 {
            Input Currentday
          }
        }
      }
    }
  } 
  Else {
    If count == 1 {
      While Currentday > 28 {
        Input Currentday
      }
    }
    else {
      while DOBday > 28 {
        Input DOBday
      }
    }
  }
} 
