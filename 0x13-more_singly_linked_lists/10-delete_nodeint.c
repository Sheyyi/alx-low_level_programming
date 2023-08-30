#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a specified node of a linked list
 * @head: Points to the head of the linked list
 * @index: Position of node to be deleted
 *
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *linkedlist;
	listint_t *prev;

	linkedlist = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = linkedlist->next;
		free(linkedlist);
		return (1);
	}

	i = 0;
	while (linkedlist != NULL && i < (index - 1))
	{
		prev = linkedlist;
		linkedlist = linkedlist->next;
		i++;
	}

	if (linkedlist == NULL)
		return (-1);

	prev->next = linkedlist->next;
	free(linkedlist);

	return (1);
}
