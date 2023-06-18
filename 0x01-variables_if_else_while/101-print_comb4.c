#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int a = '0';
	int b ;
	int c ;

	while (a <= '9')
	{
		{
			while (b <= '9')
			{
				b = a + 1;
				while (c <= '9')
				{
					c = b +1;
					if ((a != b) && (b != c))
					{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a + b + c) != ('6' + '8' + '9'))
					{
					putchar(',');
					putchar(' ');
					}
					}
					c++;
				}
			b++;
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
