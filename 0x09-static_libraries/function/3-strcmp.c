#include "main.h"

/**
 * _strcmp - a function
 * @s1: character string
 * @s2: character string
 * Return: 0 if matching, and ns1 - ns2 if not matching
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
