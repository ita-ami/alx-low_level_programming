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
			_putchar(d + '0');
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;

	}

}
