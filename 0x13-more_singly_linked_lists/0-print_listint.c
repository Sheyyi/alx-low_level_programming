#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints elements of a single linked list
 * @h: points to linked list to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
