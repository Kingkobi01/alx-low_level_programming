#include "lists.h"

/**
 * Adds a new node at the end of a listint_t list
 * @head : Address of the head of the listint_t list.
 * Return: Number of elements in the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *h;

	newNode = malloc(sizeof(listint_t));

	if (newNode != NULL || head != NULL || *head == NULL)
	{
		newNode->n = n;
		newNode->next = NULL;

		h = *head;

		if (h == NULL)
			*head = newNode;
		else
		{
			while (h->next != NULL)
				h = h->next;

			h->next = newNode;

			return (newNode);
		}
	}

	return (NULL);
}
