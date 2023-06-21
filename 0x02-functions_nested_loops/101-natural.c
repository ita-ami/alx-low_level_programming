#include <stdio.h>
int main(void)
{
	int n = 1024;
	int a = 0;
	int m, k, sum1, sum2, sum;
	for (a=0; a <= 400; a++)
	{
		m = (a * 3);
		if (m <= n)
		{
			m = (m + m);
		}
	}
	for (a = 0; a <= 300; a++)
	{
		k = ( a * 5);
		if (k <= n)
		{
			k = (k + k);
		}
		sum = (m + k);
		printf("%d",sum);

	}
	return (0);
}

