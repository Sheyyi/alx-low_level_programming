#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given position
 * @head: Points to head of a linked list
 * @idx: Index position for node to be inserted into
 * @n: data at node to be inserted
 *
 * Return: Address of new node, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *lk;
	listint_t *linkedlist;

	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (NULL);

	i = 0;
	lk->n = n;
	linkedlist = *head;

	if (idx == 0)
	{
		lk->next = *head;
		*head = lk;
		return (lk);
	}

	while (linkedlist != NULL && i < idx)
	{
		if (i == (idx - 1))
		{
			lk->next = linkedlist->next;
			linkedlist->next = lk;
			return (lk);
		}
		linkedlist = linkedlist->next;
		i++;
	}
	return (NULL);
}
