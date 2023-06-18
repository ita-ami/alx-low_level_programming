#include <stdio.h>
/**
 * main - the entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int a = '0';
	int b = '0';
	int c = '0';
	int d = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if ((a + b) != (c + d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if ((a + b + c + d) != ('9' + '8' + '9' + '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
					d++;
				}
				c++;
				if ((b == '0') && (a == '0'))
				{
				d = '0';
				}
			}
			b++;
			d = b + 1;
			if (a == '0')
			{
			c = '0';
			}
		}
		a++;
		c = a;
	}
	putchar('\n');
	return (0);
}
