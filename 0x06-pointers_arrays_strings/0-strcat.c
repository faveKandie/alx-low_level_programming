#include "main.h"

/**
 * *_strcat - Entry point
 * @*dest: character being tested
 * @*src: second character being tested
 * Return: Always 0 Success
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] != '\0';
	return (dest);
}
