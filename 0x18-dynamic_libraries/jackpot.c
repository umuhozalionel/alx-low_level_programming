#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int printf(const char *fomat, ...)
{
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "Congatulations, you win the jackpot!\n", 38);
	exit (EXIT_SUCCESS);

}
