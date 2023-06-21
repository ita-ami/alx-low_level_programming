#include "main.h"
#include <stdio.h>
/**
 * void print_to_98 -  function that prints all natural numbers from n to 98, followed by a new line.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d",n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			if (n == 98)
			{
				printf("\n");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d",n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			if (n == 98)
			{
				printf("\n");
			}
			n--;
		}
	}

}
