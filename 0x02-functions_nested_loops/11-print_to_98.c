#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry ruote
 * @n: parameters to be used
 * Return: Always 0 Success
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("98\n");
	}
}
