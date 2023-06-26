 #include "main.h"
/**
 *puts_half - a function that prints half of a string
 *@str: a string
 */
void puts_half(char *str)
{
	char c;
	int i, l, k;

	l = _strlen(str);
	k = l / 2;
	for (i = k; i <= 500; i++)
	{
		c = str(i);
		if (c == '\0')
		{
			i = 500;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
