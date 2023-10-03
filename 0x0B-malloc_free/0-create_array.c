#include "main.h"

/**
 * create_array - creates array
 * @size: size of array
 * @c: character to store in array
 * Return: pointer of the array,might not if NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
