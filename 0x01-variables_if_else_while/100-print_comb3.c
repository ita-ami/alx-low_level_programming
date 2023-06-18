#include <stdio.h>
/**
 * main - the entry of our program
 * Return: always 0 (success)
 */
int main(void)
{
	int a = '0';
	int b = '1';

	while (a <= '9')
	{
		b = '1';
		if (a != b)
		{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
			b++;
		}
		}
		a++;
	}
	return (0);
}
