// Write a program that requests a type double number and prints the value of the number cubed. 
//Use a function of your own design to cube the value and print it.
// The main() program should pass the entered value to this function.
#include <stdio.h>
double cube(double b, double c, double d);

int main(void)
{
  double a,x,y,z;
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