#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: Pointer to head of linked list
 * @n: Integer to be added
 *
 * Return: Address of the new element, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lk;
	listint_t *linkedlist;

	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (NULL);

	lk->n = n;
	linkedlist = *head;

	if (*head == NULL)
	{
		*head = lk;
		return (lk);
	}

	while (linkedlist->next != NULL)
		linkedlist = linkedlist->next;

	linkedlist->next = lk;

	return (lk);
}
