#include "mai.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory are<F6>a to be filled
 * @src: memory area being copied
 * @n: number of area to be filled
 * Return: pointter to memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}