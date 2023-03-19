#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome 0 if not
 * @s: Pointer to the string to be returned
 * Return: 1 if success 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return
			(1);
	else
		return (1 + get_length(++S));
}


/**
 * get_length - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * my_pal - recursive check if palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if plaindrome, 0 if not
 */


int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++S, l - 2));
	}
	else
		return (0);
}
