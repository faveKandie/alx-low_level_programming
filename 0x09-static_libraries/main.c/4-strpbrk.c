#include "main.h"

/**
 * _strpbrk - a function
 * @s: character
 * @accept: character
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept` or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
