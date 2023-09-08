#include <stdio.h>

/**
 *
 *  main - this desribes the main function of the code
 *
 * Return: 0 on success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
	   printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	   printf("Size of a long long int: %lu byte(s)\n", (unsigned lon g)sizeof(e));
	   return (0);

}
