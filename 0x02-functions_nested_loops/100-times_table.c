#include "main.h"
#include <stdio.h>
/**
 * print_times_table - function that prints the n times table
 * @n: the argument
 */
void print_times_table(int n)
{
	int i ,j;
	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			j = 0;
			for (j = 0; j <= 0; j++)
			{
				int d = (i * j);
				if (j == n)
				{
					printf("%d", d);
				}
				else
					printf("%d, ",d);
			
			}
		}

	}
}
