#include "main.h"

/**
 * _isupper - uppercase letters check
 * @c: char to check u case
 *
 * Return: 1 if it's uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
