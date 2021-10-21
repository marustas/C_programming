/*
Write a program that reads in a line of input and then prints the line in reverse order. 
You can store the input in an array of char; assume that the line is no longer than 255 characters. 
*/
#include <stdio.h>

int main(void)
{
    char line[255];
    int a = 0;

    printf("Enter the line:\n");
    
    while (scanf("%c", &line[a]), line[a] != '\n')
        ++a;

    for (; 0 <= a; --a)
        printf("%c", line[a]);

    printf("\n");

    return 0;
}