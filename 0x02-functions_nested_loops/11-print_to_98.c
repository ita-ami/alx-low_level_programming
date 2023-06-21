#include "main.h"
#include <stdio.h>
/**
 * void print_to_98 -  function that prints all natural numbers from n to 98, followed by a new line.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (int n ;n <= 98 ;n++)
		{
			printf("%d",n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n >= 98)
	{
		for (int n ;n >=98 ;n--)
		{
			printf("%d",n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
		printf("%d",n);

}
