#include "main.h"

/**
 * puts_half - printing half strings
 * @str: printing parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
