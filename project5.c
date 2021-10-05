#include<stdio.h>
double square (double x);

int main(void){
double y;
printf("Enter your variable: ");
scanf("%lf", &y);
printf ("Your squared variable is %.2lf ", square(y));
};

double square(double x){
    return x*x;
}