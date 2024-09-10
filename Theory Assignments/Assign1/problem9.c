#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
int main() {
int divi, yearDiff, month, year, DOBmonth, Currentmonth, day;
int count, DOBday, Currentday, DOByear, Currentyear, Age;
bool Isoddmonth, Isevenmonth, Ismonthwrong, IsDOBleapyear, Isleapyear;
printf("Enter DOByear: ");
scanf("%d", &DOByear);

printf("Enter Currentyear: ");
scanf("%d", &Currentyear);

printf("Enter DOBday: ");
scanf("%d", &DOBday);

printf("Enter Currentday: ");
scanf("%d", &Currentday);

printf("Enter DOBmonth: ");
scanf("%d", &DOBmonth);

printf("Enter Currentmonth: ");
scanf("%d", &Currentmonth);

count = 1;
Isoddmonth = false;
Isevenmonth = false;
Ismonthwrong = false;
IsDOBleapyear = false;




void Checkday() {
  printf("In Checkday");
  if (count == 1) {
    day = Currentday;
    if (Isoddmonth == true) {
      while (day > 31) {
        scanf("%d", &Currentday);
        // Input Currentday;
        day = Currentday;
      } 
    }
    else {
      while (day > 30) {
        scanf("%d", &Currentday);
        // Input Currentday;
        day = Currentday;
      }
    }
  }
  else {
    day = DOBday;
    if (Isoddmonth == true) {
      while ( day > 31 )  {
        scanf("%d", &DOBday);
        day = DOBday;
      }
    }
    else {
      while (day > 30) {
         scanf("%d", &DOBday);
        day = DOBday;
      }
    }
  }
}






void Checkleapyear() {
  printf("In Checkleapyear");
  if (count == 1) {
    year = Currentyear;
  } 
  else {
    year = DOByear;
  }
  
  if (year % 4 == 0) {
    printf("Able to mod by 4\n");
    if (year % 400 == 0) {
      printf("Able to mod by 400\n");
      if (year % 100 != 0) {
        printf("Notable to mod by 100\n");
        if (count == 1) {
          printf("count in 1 in leapyear\n");
          while (Currentday > 29) {
            scanf("%d", &Currentday);
          }
        }
        else {
          while (DOBday > 29) {
            scanf("%d", &DOBday);
           
          }
        }
      } 
      else {
      
        if (count == 1) {
          while (Currentday > 28) {
            scanf("%d", &Currentday);
          } 
        }
        else {
          while (DOBday > 28) {
            
            scanf("%d", &DOBday);
          }
        }
      
   
      }
    } 
    else {
      if (year % 100 == 0) {
        if (count == 1) {
          while (Currentday > 29) {
            scanf("%d", &Currentday);
          } 
        }
        else {
          while (DOBday > 29) {
            
            scanf("%d", &DOBday);
          }
        }
      }
    }
  } 
  else {
    if (count == 1) {
      while (Currentday > 28) {
        scanf("%d", &Currentday);
      }
    }
    else {
      while (DOBday > 28) {
        scanf("%d", &DOBday);
      }
    }
  }
} 


void Checkmonth() {
  printf("In Checkmomth");
  if (count == 1) {
    month = Currentmonth;
  }
  else {
    month = DOBmonth;
  }
  
  if (month != 1) {
    if (month != 2) {
      if (month != 3) {
        if (month != 4) {
          if (month != 5) {
            if (month != 6) {
              if (month != 7) {
                if (month != 8) {
                  if (month != 9) {
                    if (month != 10) {
                      if (month != 11) {
                        if (month != 12) {
                          Ismonthwrong = false;
                        } 
                        else {
                          Isoddmonth = false;
                          Isevenmonth = true;
                        }
                      }
                      else {
                        Isoddmonth = true;
                        Isevenmonth = false;
                      }
                    }
                    else {
                      Isoddmonth = false;
                      Isevenmonth = true;
                    }
                  }
                  else {
                    Isoddmonth = true;
                    Isevenmonth = false;
                  }
                }
                else {
                  Isoddmonth = false;
                  Isevenmonth = true;
                }    
              }
              else {
                Isoddmonth = true;
                Isevenmonth = false;
              }
            }
            else {
              Isoddmonth = false;
              Isevenmonth = true;
            }
          }
          else {
            Isoddmonth = true;
            Isevenmonth = false;
          }
        } 
        else {
          Isoddmonth = false;
          Isevenmonth = true;
        }
      }
      else {
        Isoddmonth = true;
        Isevenmonth = false;
      }
    } 
    else {
      printf("Checking leap year\n");
      Checkleapyear();
      Isoddmonth = false;
      Isevenmonth = false;
    }
  } 
  else {
    Isoddmonth = true;
    Isevenmonth = false;
  }
}






while (Currentyear < DOByear) {
  scanf("%d", &Currentyear);
  scanf("%d", &DOByear);
}


while (count <= 2) {
  printf("Inside Count loop");
  Checkmonth();
 
  while (Ismonthwrong == true) {
    if (count == 1) {
      scanf("%d", &Currentmonth);
      // Input Currentmonth
    } 
    else {
      //Input DOBmonth
      scanf("%d", &DOBmonth);
    }
    Checkmonth();
  }

  Checkday();
  count = count + 1;
}




if (DOByear % 4 == 0) {
  printf("Checking leapyear");
  if (DOByear % 400 == 0) {
    if (DOByear % 100 != 0) {
      IsDOBleapyear = true;
    }
  } 
  else {
    if (DOByear % 100 != 0) {
      IsDOBleapyear = true;
    } 
    else {
      IsDOBleapyear = false;
    }
  }
} 
else {
   IsDOBleapyear = false;
}



if (Isleapyear == false) {
  printf("Not a leapyear");
  if (Currentyear - DOByear == 0) {
    Age = 0;
  }
  else if (Currentyear - DOByear > 0) {
    if (Currentmonth - DOBmonth == 0) {
      if (Currentday - DOBday >= 0) {
        Age = Currentyear - DOByear;
      }
    }
    else if (Currentmonth - DOBmonth > 0) {
      Age = Currentyear - DOByear;
    }
    else {
      Age = (Currentyear - DOByear) - 1;
    }
  }
  printf("%d", Age);
}
else {
   printf("leapyear");
  yearDiff = Currentyear - DOByear;
  if (yearDiff % 4 == 0) {
    divi = yearDiff / 4;
    Age = divi;
  }
  else if (yearDiff % 4 == yearDiff) {
   Age = 0;
  }
  /*else {
    divi = yearDiff / 4
    Age = divi;
  }*/
  printf("%d", Age);
}



}