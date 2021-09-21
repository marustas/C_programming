
#include <stdio.h>

void Temperatures(double f);

int main(void)
{
    double fahr;
    do
    {
        Temperatures(fahr);
        printf("Enter a temperature in degrees fahrenheit (q to quit): ");
    } while (scanf("%lf", &fahr) == 1);
    printf("bye\n");
}

void Temperatures(double f)
{
    const double FAHR_TO_CEL_SCALE = 5.0 / 9.0;
    const double FAHR_TO_CEL_OFFSET = -32.0;
    const double CEL_TO_KEL_OFFSET = 273.16;

    double c = (f + FAHR_TO_CEL_OFFSET) * FAHR_TO_CEL_SCALE;
    double k = c + CEL_TO_KEL_OFFSET;

    printf("%.2f degrees fahrenheit is %.2f degrees celsius or %.2f degrees kelvin.\n", f, c, k);
}