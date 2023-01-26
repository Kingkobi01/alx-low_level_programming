#include "lists.h"

/**
 * add_node_end - Adds a new node
 *		at the end of a list_t list
 * @head : address of the first node
 * @str : value of node to be appended
 * Return: address of the newly created
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp;

	if (newNode == NULL)
		return (NULL);

	if (str != NULL)
	{
		newNode->str = strdup(str);
		newNode->len = strlen(str);
		newNode->next = NULL;
	}

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return (newNode);
}
