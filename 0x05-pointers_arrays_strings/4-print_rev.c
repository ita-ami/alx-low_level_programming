#include "main.h"
/**
 *print_rev - a function that prints a string, in reverse
 *@s: the argument
 */
void pri, k;
	char c, d;

	for (i = 0; i < 1000; i++)
	{
		c = s[i];
		if (c == '\0')
		{
			k = i;
			i = 1000;
		}
	}
	for (i = (k - 1); i >= 0; i--)
	{
		d = s[i];
		_putchar(d);
	}
	_putchar('\n');
}
