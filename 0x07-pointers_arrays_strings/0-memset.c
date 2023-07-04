#include "main.h"
/**
 *_memset - function
 *@s: argument
 *@b: argument
 *@n:argument
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}
	return (s);
}
