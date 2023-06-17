#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
      	int n;
	int l = n % 10 ;
     
	srand(time(0));
      	n = rand() - RAND_MAX / 2;
      	/* your code goes there */
	if( l>5 )
	{
		printf("Last digit of %d is %d and is greater than 5 ", n , l );
	}
	else if( l==0)
	{
		printf("Last digit of %d is %d and is 0 ", n ,l );
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0 ");

      	return (0);
}
