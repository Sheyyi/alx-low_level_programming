#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
