#include <stdio.h>
#include "main.h"
/**
* main - the entry point of our program
* Return: always 0 (success)
*/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
/**
* print_alphabet - function that prints all lowercase alphabet
*/
void print_alphabet(void)
{
char i = 'a';

while (i <= 'z')
{
putchar(i);
i++;
}
putchar('\n');
}
