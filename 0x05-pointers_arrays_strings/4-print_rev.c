#include "main.h"
/**
 *print_rev - a function that prints a string, in reverse
 *@s: the argument
 */
void print_rev(char *s)
{
	int i, a;
	char c;

	a = _strlen(s);
	for (i = a; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');
}
