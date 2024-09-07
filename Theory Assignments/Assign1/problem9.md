# Pseudocode
Declare DOBmonth, Currentmonth As String
Declare DOBday, Currentday, DOByear, Currentyear As Int
Input DOByear, Currentyear, DOBday, Currentday, DOBmonth, Currentmonth
Count = 1
Isoddmonth = False
Isevenmonth = False
Ismonthwrong = False
While count <= 2 {
  Checkmonth()
  While Ismonthwrong == True {
    if count == 1 {
      Input Currentmonth
    } 
    Else {
      Input DOBmonth
    }
  }
  count = count + 1
}


Checkday() {
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




Checkmonth() {
  If count == 1 {
    month = Currentmonth
  }
  Else {
    month = DOBmonth
  }
  
  If month != "January" {
    If month != "Feburary" {
      If month != "March" {
        If month != "April" {
          If month != "May" {
            If month != "June" {
              If month != "July" {
                If month != "August" {
                  If month != "September" {
                    If month != "October" {
                      If month != "November" {
                        If month != "December" {
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
      Isoddmonth = False
      Isevenmonth = True
    }
  } 
  Else {
    Isoddmonth = True
    Isevenmonth = False
  }
}

Checkleapyear() {
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
