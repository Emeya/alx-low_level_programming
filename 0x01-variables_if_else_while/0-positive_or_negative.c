nclude <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - assign a random number to int n
 *   * each time it executes and prints it
 *    *
 *     * Return: Always 0 (Success)
 *      */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
								printf("%d is positive\n", n);
						else if (n == 0)
									printf("%d is zero\n", n);
							else
										printf("%d is negative\n", n);
								return (0);
}
