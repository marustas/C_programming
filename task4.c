#include <stdio.h>
#include <math.h>
int main(void)
{
  int c;
  double a, d;
  do
  {
    printf("Enter a height in centimeters: ");
    scanf("%lf", &a);
    double b = a * 393701 / 1000000;
    c = b / 12;
    double d = b - 12 * c;
    printf("%.1lf is equal to %d feet and %.1lf inches\n", a, c, d);
  } while (a > 0);
}