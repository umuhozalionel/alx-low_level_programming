#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0 (success)
 * */

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
		putchar(l);
	for (l = 'A' ; l <= 'Z' ; l++)
		putchar(l);
	putchar('\n');
        return (0);
}
