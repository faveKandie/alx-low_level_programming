#include "main.h"

/**
 * _strlen - a function
 * @s: character
 * Return: void
 */
int _strlen(char *s);
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
