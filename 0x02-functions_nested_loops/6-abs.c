#include "main.h"
/**
*_abs - a  function that computes the absolute value of an integer.
*Return: always 0 (success)
*/
int _abs(int n)
{
if (n >= 0)
{
_putchar(n);
}
else
{
int m;

m = n * (-1);
_putchar(m);
}
return (0);
}
