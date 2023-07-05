#include "main.h"
/**
 *_puts_recursion - function that prints a string
 *@s: char
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
		_puts_recursion(s);
}
