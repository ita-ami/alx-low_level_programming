#include <stdio.h>
int main(void)
{
	int n = 1024;
	int a = 0;
	int m, k, mi, sum1, sum2, sum;
	sum1 = 0;
	sum2 = 0;
	mi = 0;
	for (a=0; a <= (1024 / 3); a++)
	{
		m = (a * 3);
		k = (a * 5);
		if (m < n)
		{
			sum1 = (sum1 + m);
		}
		k = (a * 5);
		if (k < n)
		{
			sum2 = (sum2 + k);
		}
		n = 1024;
		if (k == m)
		{
			mi = (mi + m);
		}
	}
	sum = (sum1 + sum2 - mi);
	printf("%d\n%d\n",mi,sum);
	return (0);
}

