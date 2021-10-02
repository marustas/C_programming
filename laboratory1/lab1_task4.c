/*
Write a program that asks the user to enter a height in centimeters and then displays the height in centimeters and in feet and inches.
Fractional centimeters and inches should be allowed, and the program should allow the user to continue entering heights until a nonpositive value is entered.
*/
#include <stdio.h>
#include <math.h>
#define INCH_TO_CM_SCALE 2.54
#define FEET_SCALE 12
int main(void)
{
  float cm;
  int feet;
  double inchesWhole, inchesRemain;
  printf("Enter a height in centimeters(<=0 to quit): ");
  scanf("%f", &cm);
  while (cm > 0)
  {
    inchesWhole = cm / INCH_TO_CM_SCALE;
    feet = inchesWhole / FEET_SCALE;
    inchesRemain = inchesWhole - feet * FEET_SCALE;

    printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inchesRemain);
    printf("Enter a height in centimeters (<= 0 to quit): ");
    scanf("%f", &cm);
  }

  printf("bye\n");
  return 0;
}