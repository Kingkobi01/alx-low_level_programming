#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: The head of the linked list
 * @n: The value to add to the new node
 *
 * Return: The address of the new element, or NULL it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	return (NULL);
}
