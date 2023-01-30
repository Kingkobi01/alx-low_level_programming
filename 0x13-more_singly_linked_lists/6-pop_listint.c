#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head : Address of the head of the listint_t list.
 * Return: deleted node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *h;
	int data;

	h = *head;

	if (h == NULL)
		return (0);

	data = h->n;

	temp = h;
	h = h->next;
	*head = h;

	free(temp);
	return (data);
}
