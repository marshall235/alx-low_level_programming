#include "search_algos.h"

/**
 * binary_recursive - recursive algorithm for binary search
 * @array: pointer to the first position
 * @size: Length of the array
 * @value: element to search
 * Return: index of value
 */

size_t binary_recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t aux;

	if (!array || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (aux = 0; aux < size; aux++)
		printf("%d%s", array[aux], (aux != size - 1) ? ", " : "\n");
	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (binary_recursive(array, mid, value));
	mid++;
	return (binary_recursive(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - impliment binary search Algo
 * @array: given aray to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int el;

	el = binary_recursive(array, size, value);

	if (el >= 0 && array(el) != value)
		return (-1);
	return (el);
}
