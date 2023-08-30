#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node of a linked list
 * @head: Pointer to head of linked list
 * @index: The index position of the node to be gotten
 *
 * Return: Node of linked list, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *linkedlist;
	unsigned int i;

	i = 0;
	linkedlist = head;
	while (linkedlist != NULL && i < index)
	{
		linkedlist = linkedlist->next;
		i++;
	}

	if (linkedlist == NULL)
		return (NULL);

	return (linkedlist);
}
