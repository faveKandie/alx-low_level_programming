#include "main.h"

/**
 * *_strncat - Entry point
 * @dest: character being used
 * @src: second character being used
 * @n: third charcter being used
 * Return: Always 0 Success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	i = 0;
	j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j] = src[i];

	return (dest);
}
