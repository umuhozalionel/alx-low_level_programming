#include "main.h"

/**
 * _puts - length of a string
 * @str: value of string to be printed
 * return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
