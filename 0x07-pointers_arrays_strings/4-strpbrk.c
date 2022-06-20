#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: first string
 * @accept: seconf string
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			break;
	}
	return (0);
}
