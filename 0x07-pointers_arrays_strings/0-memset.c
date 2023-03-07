#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area fill
 * Return: Pointer to the meomry area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);

}
