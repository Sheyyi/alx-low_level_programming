#include "lists.h"

/**
 * sum_listint - Gets the sum of all data in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *linkedlist;

	linkedlist = head;
	while (linkedlist != NULL)
	{
		sum += linkedlist->n;
		linkedlist = linkedlist->next;
	}

	return (sum);
}
