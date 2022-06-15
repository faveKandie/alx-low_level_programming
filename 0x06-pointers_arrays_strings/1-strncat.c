#include "main.h"

/**
 * *_strncat - Entry point
 * @*dest: character being used
 * @*src: second character being used
 * @n: third charcter being used
 * Return: Always 0 Success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] != '\0';
	return (dest);
}
