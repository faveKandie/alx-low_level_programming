#include "mai.h"

/**
 * _memcpy - copies memory area
 * @dest: paste string
 * @src: copy string
 * @n: number of area 
 * Return: pointter to memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
