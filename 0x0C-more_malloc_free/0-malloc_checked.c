#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: a pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = NULL;;
	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
