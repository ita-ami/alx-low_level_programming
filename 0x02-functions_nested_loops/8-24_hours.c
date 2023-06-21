#include "main.h"
void jack_bauer(void)
{
char a = '0';

while (a <= '2')
{
char b = 'o';

while (b <= '3')
{
char c = '0';

while (c <= '5')
{
char d = '0';

while (d <= '9')
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
d++;
}
c++;
}
b++;
}
a++;
}
}
