/*
Name: Saad ullah
Section: BAI-1A
Roll-num: 24k-0004
Desc: Removing redundent letters from string
*/

#include <string.h>
#include <stdio.h>
#include <limits.h>

int main() {

  char word[30];
  
  int start = -1; 
  int end = -1;
  int i,j,k,l;
  int size;
 
  printf("Enter word: ");
  scanf("%s", &word);

  size = strlen(word);

  char trunc_word[size];

  // going through each characters
  for(i=0;i<size;i++){
   start = -1;
   end = -1;

   // calculating start index of recurring character
   if(word[i] == word[i + 1] ) {
      start = i; 
      
      // calculating end index of recurring character
      for(j=start + 1;j<size;j++){
        if(word[j] == word[i]) end = j; 
      }// end loop j
    }// end if
 
    // Do not remove anything if redundancy not found and go to next letter
    if (start == -1 || end == -1) continue;
    

    // removing redundant letters
    for(k=0;k<start;k++){
       trunc_word[k] = word[k];
    }// end for loop k
   
    l = k;
    k=end;  

    while(k < size){
      trunc_word[l] = word[k];
      l++;
      k++;  
    }// end while
    
    // overwriting the redundant word with non-redundant word
    for(k=0;k<size;k++){
      word[k] = trunc_word[k];
    }  
 

  }// end loop i

  printf("Shortened word is: %s", word);
  return 0;
}