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
			sum1=+m;
		}
	}
	for (a = 0; a <= 300; a++)
	{
		k = ( a * 5);
		if (k <= n)
		{
			sum2=+k;
		}
		sum = (sum1 + sum2);
		printf("%d",sum);

	}
	return (0);
}

