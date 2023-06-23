#include "main.h"
/**
 * print_triangle -  function that prints a triangle.
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, n;

	for (n = 0; n < size; n++)
	{
		if (size > 0)
		{
			for (i = (size - 1); i > 0; i--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= size; j++)
			{
				_putcahr('#');
			}
		}
		_putchar('\n');
	}
}

