#include <stdio.h>
#include "lists.h"

/**
 * first - before main function executed
 */

void first(void) __attribute__ ((constructor));
void before_main(void)
{
	printf("You're beat!, you must allow,\n");
	printf("i bore my house upon my back!\n");
}
