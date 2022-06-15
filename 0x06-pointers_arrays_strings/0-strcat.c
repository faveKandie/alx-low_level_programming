#include "main.h"

/**
 * *_strcat - Entry point
 * @dest: character being used
 * @src: second character
 * Return: Always 0 Success
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
		i++;
	}

	dest[i] != '\0';
	return (dest);
}
