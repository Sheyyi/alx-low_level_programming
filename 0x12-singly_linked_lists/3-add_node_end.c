#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Add a new node to the end of a linked list
 * @head: Pointer to head of linked list
 * @str: String to be added
 *
 * Return: Address to new element, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lk;
	list_t *linkedlist;
	unsigned int l;

	l = 0;
	while (str[l] != '\0')
		l++;

	lk = malloc(sizeof(list_t));
	if (lk == NULL)
		return (NULL);

	lk->str = strdup(str);
	lk->len = l;
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
