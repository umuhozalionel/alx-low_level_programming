#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of  integers
 * @min: starting int
 * @max: max int
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
