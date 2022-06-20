#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: string being used
 * @c: character being located
 * Return: s if found and null if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i), i++)
	{
		if (*(s + i) == c)
			return (s + i);
		if (*(s + i) != c)
			return (0);
	}
}
