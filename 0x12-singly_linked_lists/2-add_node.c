#include "lists.h"
/**
 * add_node - Adds a new node
 * 			 at the beginning of a list_t list.
 * @head : address of the first node
 * @str : value of the node to be added.
 * Return: address of the newly added node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;

	char *cpy = strdup(str);
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = cpy;
	newNode->next = *head;

	temp = newNode;

	*head = temp;

	return (newNode);
}
