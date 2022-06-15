#include "main.h"

/**
 * *rot13 - Entry point
 * @n: character in use
 * Return: Always 0 Success
 */
char *rot13(char *)
{
	int i, j;
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;

	for (n[i] != '\0')
	{
		i++;
		for (j = 0; original[j] != '\0'; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}
	return (str);
}
