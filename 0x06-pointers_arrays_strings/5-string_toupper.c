#include "main.h"

/**
 * *string_toupper - a function that changes all lower of a string to upper
 * @c: String to be reversed
 * Return: Always 0
 */
char *string_toupper(char *)
{
	int i, j;
	char letter;

	i = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		letter = str[j];
		if (letter >= 'a' && letter <= 'z')
		{
			letter -= 32;
			str[j] = letter;
		}
	}

	return (str);
}
