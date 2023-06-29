#include "main.h"
/**
 *_strcat -  a function that concatenates two strings.
 *Return: pointer to the resulting string dest
 *@dest: the first argument
 *@src: the second argument
 */
char *_strcat(char *dest, char *src)
{
	int i, j, l;
	char *ptr = dest;
	l = 0;
	for (i = 0; i <= 300; i++)
	{
		if (dest[i] != '\0')
		{
			l++;
		}
		else
		{
			i = 301;
		}
	}
	for (j = 0; j < 300; j++)
	{
		if (j > l)
		{
			dest[j] = src[(j - l)];
		}
		if (src[j - l] == '\0')
			j = 300;
	}
	return (ptr);
}
