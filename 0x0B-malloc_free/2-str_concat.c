#include "main.h"
#include <stlib.h>


/**
 * *str_concat - concatenates two strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *a;

	int i, j, k, l, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	a = malloc((i * sizeof(char)) + (j * sizeof(char)) + 1);
	if (a == NULL)
		return (NULL);
	len = i + j + 1;

	for (k = 0, l = 0; k < len; k++)
	{
		if (k < 1)
			a[k] = s1[k];
		else
			a[k] = s2[l++];
	}

	return (a);

}
