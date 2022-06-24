#include "main.h"

/**
 * _strcpy: a function
 * @dest: character
 * @src: character
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
