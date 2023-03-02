#include "main.h"

/**
 * reverse_array - reverses the content of array of integers
 * @a: pointer to array a
 * @n: array length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] =  tmp;
	}
}
