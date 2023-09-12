#include <stdio.h>

/**
 * main - sum multiples of 3 or 5 in numbers below 1024
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int g;

	for (g = 1 ; g < 1024 ; g++)
	{
		if (g % 3 == 0 || g % 5 == 0)
			sum = sum + g;
	}

	printf("%d\n", sum);
	return (0);

}
