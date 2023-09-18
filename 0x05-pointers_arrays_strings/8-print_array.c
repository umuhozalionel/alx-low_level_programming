#include "main.h"

/**
 * print_array - print any element of an araay of integeres
 * @a: array to store in
 * @n: number of elements we will print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
