#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to head of linked list
 *
 * Return: head node data, 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int dat;
	listint_t *linkedlist;

	if (head == NULL)
		return (0);

	dat = (*head)->n;
	linkedlist = (*head)->next;
	free(*head);
	*head = linkedlist;

	return (dat);
}
