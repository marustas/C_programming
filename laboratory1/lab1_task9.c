
#include <stdio.h>

void Temperatures(double f);

int main(void)
{
    double f;
    do
    {
        Temperatures(f);
        printf("Enter a temperature in degrees fahrenheit (q to quit): ");
    } while (scanf("%lf", &f) == 1);
    printf("bye\n");
}

void Temperatures(double f)
{
    const double CEL_TO_KEL_COUNT = 273.16;
    const double FAHR_TO_CEL_SCALE = 5.0 / 9.0;
    const double FAHR_TO_CEL_COUNT = -32.0;

    double c = (f + FAHR_TO_CEL_COUNT) * FAHR_TO_CEL_SCALE;
    double k = c + CEL_TO_KEL_COUNT;

    printf("%.2f degrees fahrenheit is %.2f degrees celsius or %.2f degrees kelvin.\n", f, c, k);
}