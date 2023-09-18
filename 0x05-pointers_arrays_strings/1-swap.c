#include "main.h"

/**
 * swap_int - resetting n to 98
 * @a: value of a
 * @b: value of b
 * return: void
 */

void swap_int(int *a, int *b)
{
	int C;

	C = *a;
	*a = *b;
	*b = C;
}
