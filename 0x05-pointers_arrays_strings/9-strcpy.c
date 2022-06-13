#include "main.h"

/**
 * *_strcpy - mained
 * @dest: hello
 * @src: character
 * Return: Always 0 Success
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
