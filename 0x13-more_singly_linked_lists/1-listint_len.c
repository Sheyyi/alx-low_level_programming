#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Shows the number of elements in a linked list
 * @h: Points to the linked list
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
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
