#include "main.h"

/**
 * reverse_array - reversing the contents of an array of a string
 * @a: ararray of integer
 * @n: numbers of elements to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
