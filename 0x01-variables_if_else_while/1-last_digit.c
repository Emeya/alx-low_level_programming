#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main -main block
 * Description: print statements based on the last digit 
 * Return : 0
 */

int main (void)
{
	int n;
	int m;
	srand(time(0));
	n=rand()-RAND_MAX/2;
	m=n%10;

	if (m>5)
		printf("last digit of %i is %i and is gretaer than 5/n",n,m);
