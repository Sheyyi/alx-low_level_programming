#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to head of linked list
 * @str: New string to added
 *
 * Return: Address to new element, NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lk;
	unsigned int l;

	l = 0;
	while (str[l] != '\0')
		l++;

	lk = malloc(sizeof(list_t));
	if (lk == NULL)
		return (NULL);

	lk->str = strdup(str);
	lk->len = l;
	lk->next = *head;
	*head = lk;

	return (*head);
}
