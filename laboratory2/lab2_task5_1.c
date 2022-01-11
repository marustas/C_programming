/*
Have a program request the user to enter an uppercase letter.
Use nested loops to produce a pyramid pattern like this:

    AEDCB
   ABEDC
  ABCED
 ABCDE
ABCDE

The pattern should extend to the character entered. 
For example, the preceding pattern would result from an input value of E.
*/
#include <stdio.h>

int main(void) {

 int rows;
 int spaces;

 char asc;
 char desc;
 char input;

 printf("Please enter an uppercase letter: ");
 scanf("%c", &input);

 for (rows = 'A'; rows <= input; rows++) {
  for (spaces = input; spaces > rows; spaces--) {
   printf(" ");
  }
  for (asc = 'A'; asc <=rows; asc++) {
   printf("%c", asc);
  }
  for (desc = input; desc>rows; desc--) {
   printf("%c", desc);
  }
  printf("\n");
 }
 return 0;
}