#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all elemenents of list_t head
 * @h: pointer of the list header
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}

