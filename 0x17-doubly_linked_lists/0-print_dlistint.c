#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
