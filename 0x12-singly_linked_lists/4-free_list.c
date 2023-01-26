#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head : address of the first node.
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
