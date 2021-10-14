/*
Write a program that requests a type double number and prints the value of the number cubed. 
Use a function of your own design to cube the value and print it.
The main() program should pass the entered value to this function.
*/
#include <stdio.h>
double cube(double b, double c);

int main(void)
{
  double a, x;
  printf("Enter your double variable: ");
  scanf("%lf", &a);

  printf("%.3lf\n ", cube(a, x));
}

double cube(double b, double c)
{
  c = b * b * b;
  return c;
}