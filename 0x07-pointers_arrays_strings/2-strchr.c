#include "main.h"
#include <stdio.h>



/**
 * *_strchr - locates a character in a string
 * @s: string s
 * @c: string to be located
 * Return: a pointer to the first occurrence of the character
 *	c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	}

	return (s + 1);
}
