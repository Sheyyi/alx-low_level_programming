#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a linked list
 * @h: points to linked list to be printed
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
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
