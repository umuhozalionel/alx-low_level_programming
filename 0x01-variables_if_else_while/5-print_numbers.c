#include <stdio.h>


/**
 * main - main function block
 *
 * Return: Always 0.
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)

	{
	if (x != 'e' && x != 'q')
	putchar(x);
	}

	putchar('\n');

	return (0);
}
