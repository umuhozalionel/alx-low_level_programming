#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');
	return (0);
}
