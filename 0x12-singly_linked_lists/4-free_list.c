#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: linked list to be freed
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *linkedlist;

	while (head != NULL)
	{
		linkedlist = head->next;
		free(head->str);
		free(head);
		head = linkedlist;
	}
}
