#include "lists.h"

/**
 * free_listint2 - Frees a linked list from memory
 * @head: Pointer to head to linked list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *linkedlist;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		linkedlist = (*head)->next;
		free(*head);
		*head = linkedlist;
	}

	*head = NULL;
}
