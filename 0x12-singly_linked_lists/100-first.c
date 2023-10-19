#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
 * first - prints a sentence before main
 * function executed
 */

void first(void)
{
	printf("You're beat!, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
