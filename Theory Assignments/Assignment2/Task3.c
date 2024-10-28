/*
Name: Saad ullah
Section: BAI-1A
Roll-num: 24k-0004
Desc: Removing redundent characters from string
*/

#include <string.h>
#include <stdio.h>
#include <limits.h>


int main() {

  char word[30];
  int start = -1; 
  int end = -1;
  int i,j,k;
  int size;
 
  printf("Enter word: ");
  scanf("%s", &word);

  size = strlen(word);

  // going through each characters
  for(i=0;i<size;i++){
   start = -1;
   end = -1;

   // start index of recurring character
   if(word[i] == word[i + 1] ) {
      start = i; 
      
      // calculating end index of recurring character
      for(j=start + 1;j<size;j++){
        if(word[j] == word[i]) end = j; 
      }// end loop j
    }// end if

    printf("Start index: %d\n", start);
    printf("End index: %d\n", end); 
 
    // Do not remove anything if redundancy not found
    if (start == -1 || end == -1) continue;
    
    // removing redundant characters
    for(k=start;k<=end;k++){
      word[k] = '\0';
      printf("Word after removing a character: %s\n", word);
    }// end loop k
    printf("Shortened word is: %s\n", word);

  }// end loop i

  

//  printf("Shortened word is: %s", word);
  return 0;
}