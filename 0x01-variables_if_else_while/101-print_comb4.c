#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int a = '0';
	int b = '1';
	int c = '2';

	while (a <= '9')
	{
		if ((a != b) && (b != c))
		{
			while (b <= '9')
			{
				while (c <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a + b + c) != ('6' + '8' + '9'))
					{
					putchar(',');
					putchar(' ');
					}
					c++;
				}
			b++;
			c = b + 1;
			}
		}
		a++;
		b++;
	}
	putchar('\n');
	return (0);
}
