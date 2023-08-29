#include "lists.h"

/**
 * free_listint - Frees a linked list from memory
 * @head: Pointer to head of linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *linkedlist;

	while (head != NULL)
	{
		linkedlist = head->next;
		free(head);
		head = linkedlist;
	}
}
