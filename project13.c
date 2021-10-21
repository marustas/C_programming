#include<stdio.h>
#include<string.h>
struct tempInfo {
double min;
double max;
char locationCode[4];
};

int main(void){
    struct tempInfo loc1 ={-35.6, 34.3}, loc2;
    strcpy(loc2.locationCode, "KLP");
    loc2.max = 30.6;
    loc2.min = -20.7;
    printf("The maximum temperature for the location of %d has been %1.f\n",loc1.locationCode, loc1.max);
}