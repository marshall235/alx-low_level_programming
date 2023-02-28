#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string variable
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, l;
	char h;

	for (i = 0; s[1] != '\0'; i++)
		;
	l = i;

	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
