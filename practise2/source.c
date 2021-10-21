#include <stdio.h>
#include "readline.h"

#define NAME_LENGTH 25
#define MAX_PARTS 100

struct part
{
    int number;
    char name[NAME_LENGTH + 1];
    int on_hand;
} inventory[MAX_PARTS]; // data type inventory[]

int num_parts = 0;

int find_part(int number);

void insert(void);
void search(void);
void update(void);
void print(void);

int main(void)
{
    char code;
    for (;;)
    {
        printf("Enter the operation code (I -insert; u-update; p-print; s-search; q-quit");
        scanf("%c", &code);
        while (getchar() != '\n')
            ;
        switch (code)
        {
        case 'i':
            insert();
            break;
        case 's':
            search();
            break;
        case 'p':
            print();
            break;
        case 'u':
            update();
            break;
        case 'q':
            return 0;
        default:
            printf("Illegal code\n");
        }
    }
}

/* 
Find function
prints the name and number of the part number entered by user
*/
int find_part(int number)
{
    for (int i = 0; i < num_parts; ++i)
    {
        if (inventory[i].number == number)
            return i;
        return -1;
    }
}

/* 
Insert function
inserts the part number entered by user
*/
void insert(void)
{
    int part_number;

    if (num_parts == MAX_PARTS)
    {
        printf("database is full, can't add anymore parts.\n");
        return;
    }
    prinf("Enter the part number: ");
    scanf("%d", &part_number);
    if (find_part(part_number) >= 0)
    {
        printf("The part number alrwady exists.\n");
        return;
    }
    inventory[num_parts].number = part_number;
    printf("Enter the part name: ");
    read_line(inventory[num_parts].name, NAME_LENGTH);
    printf("Enter the quantitu on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);

    ++num_parts;
}

/* 
Search function
if the part exists prints the name and quantity
 otherwise pritns the error message
*/
void search(void)
{
    int number;
    printf("enter the part number: ");
    scanf("%d", &number);
    int i = find_part(number);
    if (i >= 0)
    {
        printf("Part name is $s\n", inventory[i].name);
        printf("Quantity on hand is %d\n", inventory[i].on_hand);
    }
    else
    {
        printf("Part not found.\n");
    }
}

/* 
Update function
if the part exists prompts you to make a change in quantity
otherwise prints the error message
*/
void update(void)
{
    int number;
    printf("enter the part number: ");
    scanf("%d", &number);
    int i = find_part(number);
    if (i >= 0)
    {
        prinf("Enter the chanhe in quantity: ");
        int change;
        scanf("%d", &change);
        inventory[i].on_hand += change;
    }
    else
    {
        printf("Part not found.\n");
    }
}

/*
Print function
prints a listing of all parts in the database
shows the part number , part name and the quantity
parts are printed in order in which they were entered on database
*/
void print(void)
{
    printf("Part Number  Part Name             Quantity on Hand");
    for (int i = 0; i < num_parts; ++i)
        printf("%7d   %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
}