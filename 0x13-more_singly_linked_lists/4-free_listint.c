#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head : Address of the head of the listint_t list.
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
