#include "main.h"
/**
 *rev_string - a function that reverses a string
 *@s: argument
 */
void rev_string(char *s)
{
	int i, k;
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
	char f[k];
	
	for (i = (k - 1); i >= 0; i--)
	{
		d = s[i];
		f[k - 1 - i] = d;
	}
	for (i = o; i < k; i++)
	{
		s[i] = f[i];
	}
}
