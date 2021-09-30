#include<stdio.h>
#define LENGTH 26
int main(void){
char letters_lowercase[LENGTH];
  char letter;
  int i;
  for (letter = 'a'; letter -'a'  < LENGTH; letter++){
    letters_lowercase[letter-'a'] = letter;
  }

  printf("The lowercase letters are:\n");

  for (i = 0; i < LENGTH; i++){
    printf("%c ", letters_lowercase[i]);
  }
  printf("\n");

  return 0;
}