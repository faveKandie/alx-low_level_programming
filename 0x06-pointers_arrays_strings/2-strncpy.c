#include "main.h"

/**
 * *_strncpy - Entry point
 * @*dest: character being used
 * @*src: second character being used
 * @n: third character being used
 * Return: Always 0 Success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	for (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	for (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] != '\0';
	return (dest);
}
