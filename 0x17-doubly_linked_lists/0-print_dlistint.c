#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
<<<<<<< HEAD
	size_t o = 0;
=======
	size_t s = 0;
>>>>>>> b70717b9b93eae791116123357568842c711b6c2

	while (h != NULL)
	{
		printf("%d\n", h->n);
<<<<<<< HEAD
		o++;
		h = h->next;
	}

	return (o);
=======
		s++;
		h = h->next;
	}

	return (s);
>>>>>>> b70717b9b93eae791116123357568842c711b6c2
}
