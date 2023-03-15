#include "main.h"
#include <stdlib.h>


/**
 * *_strdup - returns a pointer to a newly allocated space
 *	in memory , which contains a copy of the string given
 *	in memory
 * @str: string to duplicate
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *a;

	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(char) + 1);

	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[j] = str[j];
	a[j] = '\0';

	return (a);
}
