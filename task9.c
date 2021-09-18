#include <stdio.h>
double temperatures (double c, double f, double k);
int main(void)
{
    double x, y, z;
    printf("Enter temperature in Farenheits: ");
    scanf("&lf", x);
    
}
double temperatures (double c, double f, double k){
    c= 5.0 / 9.0 * (f - 32.0);
    k = c +273.16;
};