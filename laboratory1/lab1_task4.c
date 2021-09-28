// Write a program that asks the user to enter a height in centimeters and then displays the height in centimeters and in feet and inches.
// Fractional centimeters and inches should be allowed, and the program should allow the user to continue entering heights until a nonpositive value is entered.
#include <stdio.h>
#include <math.h>
#define INCH_SCALE_1 393701
#define INCH_SCALE_2 1000000
#define FEET_SCALE 12
int main(void)
{
  int c;
  double a, d;
  do
  {
    printf("Enter a height in centimeters: ");
    scanf("%lf", &a);
    double b = a * INCH_SCALE_1 / INCH_SCALE_2;
    c = b / FEET_SCALE;
    double d = b - FEET_SCALE * c;
    printf("%.1lf cm is equal to %d feet and %.1lf inches\n", a, c, d);
  } while (a > 0);
}