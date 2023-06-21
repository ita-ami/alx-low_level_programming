#include "main.h"
void jack_bauer(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';

	while (a <= '2')
	{
		b = '0';

		while (b <= '9')
		{
			
		if ((a == '2') && (b == '4'))
		{
			b = '9';
			b++;
		}
		c = '0';

			while (c <= '5')
			{
				d = '0';

				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
