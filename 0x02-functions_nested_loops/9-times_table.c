#include "main.h"
void times_table(void)
{
	int a = 0;
	int b = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			int d = (a * b);
			if (d <= 9)
			{
				_putchar(' ');
				_putchar(d + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				int d = (a * b);
				int e = (d / 10);
				int f = (d % 10);
			

				_putchar(e + '0');
				_putchar(f + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			b++;
		}
		if (a != 9)
		{
			_putchar('\n');
		}
			
		a++;

	}

}
