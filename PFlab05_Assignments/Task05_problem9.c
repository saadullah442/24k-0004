#include <stdio.h>
int main() {

  int year;
  printf("Enter any year: ");
  scanf("%d", &year);

  if (year % 4 == 0 && year % 400 == 0 && year % 100 != 0) {
    printf("Leap year");
  }
  else if(year % 4 == 0 && year % 400 != 0 && year % 100 != 0) {
    printf("Leap Year");
  }
  else {
    printf("Not a leap year");
  
  }


  return 0;
}