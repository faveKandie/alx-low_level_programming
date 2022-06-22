#include "main.h"

/**
 * sqrt_check - returns the natural sqrt of a number
 * @c: number being used
 * @g: guess at sqrt
 * Return: -1 or sqrt of c
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: number being used
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
