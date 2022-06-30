#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string
 * @s: string
 * Return: integer converte
 */
int _atoi(const char *s)
{

