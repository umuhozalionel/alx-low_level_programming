#include "main.h"

/**
 * *malloc_checked - allocating memorywith malloc and exit if failder
 * @b: int to be declared
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
