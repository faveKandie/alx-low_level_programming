#include "main.h"

/**
 * _strcmp - Compares pointers to two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: Always value 
 */
int _strcmp(char *s1, char *s2)
{
	int i, value;

	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			value = s1[i] - s2[i];
			i++;
		}
		else
		{
			value = s1[i] - s2[i];
			break;
		}
	}

	return (value);
}
