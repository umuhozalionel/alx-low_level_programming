#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument's number
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
