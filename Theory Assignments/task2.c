/*
Name: Saad ullah
Section: BAI-1A
Roll-num: 24k-0004
Desc: Finding frequency of characters in each slogans
*/

#include <string.h>
#include <stdio.h>
#include <limits.h>

struct char_info{
    char my_char;
    int freq; 
};

// Checking wheter character is already counted or not
// Returns 0 if character does not exists
// Returns 1 if character exists
int check_char(char current_char, int size, struct char_info arr[50]){
  int i;
  for(i=0; i < size; i++){
    if(current_char == arr[i].my_char) return 1;
  }
  return 0;
} // end funtion check_char



int main() {

  

  
  char current_char;
  int char_exists;
  int i,j,k,l;
  int string_size;
  int size = 3;
  
  char slogans[3][20] = {"buy now", "save big", "limited offer"};

  // going through elements of array
  for(i=0;i<size;i++){ 

    string_size = strlen(slogans[i]);
    current_char = '\0';
    
    // This array stores all the counted characters
    struct char_info checked_char[50] = {'\0', 0};


    // going through each characters
    for(j=0;j<string_size;j++){ 
      
      current_char = slogans[i][j];
     
      // calling function check_char
      char_exists = check_char(current_char, j, checked_char);
   
      // If character already counted no need to run further. Move on to next characater
      if(char_exists == 1) continue; 
  
      
      checked_char[j].my_char = current_char;
      checked_char[j].freq = 1;

      // checking frequency of characters
      for(k=j+1;k<string_size;k++){ 
        if(current_char == slogans[i][k]) checked_char[j].freq++;  
      } // end k loop

    }  // end j loop
    

    // Printing all the charcters and thier freq
    printf("For \"%s\": ", slogans[i]);
    printf("{");
    for(l=0;l<j;l++){
      if(checked_char[l].my_char != '\0') printf("\'%c\': %d, ", checked_char[l].my_char, checked_char[l].freq);
    }// ending l loop
    printf("}\n");	
   
    

  }// end i loop
  
  


  return 0;
}