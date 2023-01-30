#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * of a listint_t linked list
 * @head : Address of head
 * @index : index needed
 * Return: index of the node,
 * NULL if node doesnot exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (head->next)
	{
		if (index != i)
		{
			head = head->next;
			i++;
		}
		else
			return (head);
	}
	return (NULL);
}
