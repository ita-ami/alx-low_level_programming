#include <stdio.h>
int main(void)
{
	int n = 1024;
	int a = 0;
	int m, k, mi, sum1, sum2, sum, l;
	sum1 = 0;
	sum2 = 0;
	mi = 0;
	for (a=0; a <= (1024 / 3); a++)
	{
		m = (a * 3);
		if (m < n)
		{
			sum1 = (sum1 + m);
		}
	}
	for (a = 0; a <= (1024 /5); a++)
	{
		k = ( a * 5);
		if (k < n)
		{
			sum2 = (sum2 + k);
		}

	}
	for (a = 0; a< n; a++)
	{
		l = (a * 3);
		if ((mi % 5) == 0)
		{
			mi = (mi +l);
		}
	}
	sum = (sum1 + sum2 - mi);
	printf("%d\n%d\n%d\n",sum1,sum2,mi,sum);
	return (0);
}

