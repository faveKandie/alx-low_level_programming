#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry ruote
 * @n: parameters to be used
 * Return: Always 0 Success
 */
void print_to_98(int n)
{
	if (n <= 98)
			{
						for (n = n; n <= 97; n++)
										printf("%d, ");
							}
		else
					for (n = n; n > 98; n--)
									printf("%d, ");
			printf("98\n");

}
