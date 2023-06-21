#include <stdio.h>
int main(void)
{
	int n = 1024;
	int a = 0;
	int m, k, sum1, sum2, sum;
	sum1 = 0;
	sum2 = 0;
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
		if (((k % 5) != 0) && (k < n))
		{
			sum2 = (sum2 + k);
		}

	}
	sum = (sum1 + sum2);
	printf("%d\n%d\n%d",sum1,sum2,sum);
	return (0);
}

