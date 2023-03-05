#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @n: string variable
 * Return: character value
 */

char *cap_string(char *n)
{
	int i, j;

	char *nc = ",;.!?(){}\n\t\" ";

	for (i = 0; *(n + 1) != '\0'; i++)
	{
		if (i == 0 && *(n + i) >= 'a' && *(n + i) <= 'z')
			n[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (n[i] == nc[j])
			{
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] -= 32;
				}
			}
		}
	}

	return (n);
}
