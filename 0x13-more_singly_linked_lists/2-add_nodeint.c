#include "lists.h"

/**
 * add_nodeint - Adds a new node
 * at the beginning of a listint_t list.
 * @head : Pointer to the address of the head of the listint_t list.
 * @n : data for the node
 * Return: Address of the new element
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
