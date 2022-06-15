#include "main.h"

/**
 * reverse_array - Entry point
 * @a: character being used
 * @n: character being used
 * Return: Always 0 Success
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	n--;

	for (i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
