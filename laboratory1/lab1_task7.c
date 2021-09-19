#include <stdio.h>
double cube(double b, double c, double d);

int main(void)
{
  double a;
  double x;
  double y;
  double z;
  printf("Enter your double variable: ");
  scanf("%lf", &a);

  printf("%.3lf\n ", cube(a, x, y));
}
double cube(double b, double c, double d)
{
  c = b * b;
  d = c * b;
  return d;
}