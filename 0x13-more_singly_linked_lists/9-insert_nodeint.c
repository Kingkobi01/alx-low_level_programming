#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position.
 * @head : Pointer to the address of the head of the listint_t list.
 * @idx : index to index
 * @n : data for node
 * Return: Address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *h, *temp;

	listint_t *newNode = malloc(sizeof(listint_t));

	i = 0;

	if (newNode == NULL)
		return (NULL);
	h = *head;
	if (*head == NULL && idx > 0)
	{
		free(newNode);
		return (NULL);
	}
	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = h;
		*head = newNode;
		return (newNode);
	}
	while (h)
	{
		if (i < (idx - 1))
			i++;
		temp = h;
		newNode->n = n;
		newNode->next = temp->next;
		h->next = newNode;
		return (newNode);
		h = h->next;
	}
	free(newNode);
	return (NULL);
}
