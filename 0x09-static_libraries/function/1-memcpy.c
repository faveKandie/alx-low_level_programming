#include "main.h"

/**
 * _memcpy - a function
 * @dest: a charcacter
 * @src: another charcater
 * @n: third character
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
