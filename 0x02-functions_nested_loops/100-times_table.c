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
		i = 0;

		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				int d = (i * j);
				if (d == 0)
				{
					printf("%d",d);
				}
				if (j == 0)
				{
					printf("%d, ",d);
				}
				else if (d <= 9)
				{
					if (j == n)
					{
						printf("  %d",d);
					}
					else
						printf("  %d, ",d);
				}
				else if (d <= 99)
				{
					if (j == n)
					{
						printf(" %d",d);
					}
					else
						printf(" %d, ",d);
				}
				else if (d <= 999)
				{
					if (j == n)
					{
						printf("%d",d);
					}
					else
						printf("%d, ",d);
				}
			j++;
			}
			printf("\n");
		i++;
		}

	}

}
