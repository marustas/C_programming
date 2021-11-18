#include <stdio.h>
#include <time.h>
int main(void)
{
    //printf("%d\n", CLOCKS_PER_SEC);
    time_t current = time(NULL);
    struct tm *ptr;
    char date_time[19];
    int hour;
    char am_or_pm;
    /*
    struct tm our_time = { .tm_mday =1,
                           .tm_min = 60};
                           */

    //prints time and date in default format
    puts(ctime(&current));

    // date nd time formatting with strftime function
    strftime(date_time, sizeof(date_time), "%d-%m-%y %I:%M%p\n",
             localtime(&current));
    puts(date_time);

    ptr = localtime(&current);
    hour = ptr->tm_hour;

    if (hour <= 11)
    {
        am_or_pm = 'a'; // 12 AM is midnight (00:00 in 24H format) in this system
    }
    else
    {
        hour -= 12;     //converts 24H format into a regular 12H
        am_or_pm = 'p'; // 12 PM is a midday in this system
    }

    if (hour == 0)
    {
        hour = 12;
        printf("%.2d-%.2d-%.2d %.2d:%.2d%c\n", ptr->tm_mon + 1,
               ptr->tm_mday, ptr->tm_year - 100, hour, ptr->tm_min, am_or_pm);
    }
}
