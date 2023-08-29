#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a node at the beginning of a linked list
 * @head: Pointer to head of linked list
 * @n: New integer to be added
 *
 * Return: Address of new element, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lk;

	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (NULL);

	lk->n = n;
	lk->next = *head;
	*head = lk;

	return (lk);
}
