#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Checks a random number and determines
 *	if it is positive or negative
 * @i: random integer
 *
 * Return: is zero
 */
void  positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
