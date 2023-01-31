#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head : Pointer to the address of the head of the listint_t list.
 * @n : data for the node
 * Return: Number of elements in the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *h;

	if (head)
	{
		newNode = malloc(sizeof(listint_t));

		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = NULL;

		h = *head;

		if (h == NULL)
		{
			*head = newNode;
			return (*head);
		}
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
