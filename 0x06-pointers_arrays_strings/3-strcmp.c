#include "main.h"

/**
 * _strcmp - Entry point
 * @s1: character being used
 * @s2: second character being used
 * Return: Always j Success
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (i = 0; s1[i] != '\0' && s2[j] != '\0'; i++)
	{
		if (s1[i] != s2[j])
		{
			j = s1[i] - s2[j];
			break;
		}
	}
	return (j);
}
