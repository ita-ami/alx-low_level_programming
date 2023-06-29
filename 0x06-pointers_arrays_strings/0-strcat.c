#include "main.h"
/**
 *_strcat -  a function that concatenates two strings.
 *Return: pointer to the resulting string dest
 *@dest: the first argument
 *@src: the second argument
 */
char *_strcat(char *dest, char *src)
{
	int i, j, l, k;
	char res[300];

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
		if (j <= l)
		{
			res[j] = dest[j];
		}
		else if (j > l)
		{
			res[j] = src[(j - l)];
		}
	}
	for (k = 0; k < 300; k++)
	{
		dest[k] = res[k];
	}
	return (dest);
}
