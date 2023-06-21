#include "main.h"
int print_last_digit(int n)
{
int m = ( n % 10);

if (n < 0)
{
m = -m;
_putchar('0' + m);
return (m);
}else
{
_putchar('0' + m);
return (m);
}
}
