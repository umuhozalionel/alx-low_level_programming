#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocating memory for an array with memory allocation
 * @nmemb: length of the array
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	size_t i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		m[i] = 0;
	return (m);
}
