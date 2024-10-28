#include <stdio.h>

int main(){

  int size, size_of_str;
  char transactions[10][10] = {"eat", "tea", "tan", "ate", "nat", "bat"};
  size = sizeof(transactions) / sizeof(transactions[0]);
  char duplicate_trans[size];

  size_of_str = sizeof(transactions)/ sizeof(char);

  int i,j,k,l;

  // going through every element in transactions array
  for(i=0;i<size;i++){
    printf("Current string checking: %s\n", transactions[i]);
    size_of_str = sizeof(transactions[i])/ sizeof(char);

    // going through of each letter of the current element
    for(j=0;j<size_of_str;j++){

      // checking other elements
      for(k=i + 1;k<size;k++){

        // checking each letter of other elements
        for(l=0;l<size_of_str;l++){
          // break out of l loop if letters match
          if(transactions[i][j] == transactions[k][l]) break;
        }// end l loop
     
        // break out of k loop if letters match else go to next element in transactions array
        if(transactions[i][j] == transactions[k][l]) break;
     
       }// end k loop    
    }// end j loop

    if(transactions[i][j] == transactions[k][l]){
      //duplicate_trans[i] = transactions[i];
      printf("Duplicate: %s\n", transactions[i]);
    }
     

  }// end i loop;
  




  return 0;
}