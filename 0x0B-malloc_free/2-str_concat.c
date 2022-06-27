#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return:  return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int index, n = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	ar = malloc(len * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		ar[n] = s1[index];

	for (index = 0; s2[index]; index++)
		ar[n] = s2[index];

	return (ar);
}
