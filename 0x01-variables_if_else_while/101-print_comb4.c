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

	while (a <= '9')//A
	{
		if ((a != b) && (b != c))
		{
			while (b <= '9')//B
			{
				while (c <= '9')//C
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
				}//C
			b++;
			c = b + 1;
			}//B
		}
		a++;
		b = a + 1;
	}//A
	putchar('\n');
	return (0);
}
