#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node
 * at index index of a listint_t linked list
 * @head : Pointer to the address of the head of the listint_t list.
 * @index : index to insert
 * Return: Address of the new node, or NULL if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	current = *head;
	i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = current;
		*head = current->next;
		free(temp);
		return (1);
	}

	while (current)
	{
		if (i == index - 1)
		{
			temp = current->next;
			if (temp == NULL)
				return (-1);
			current->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
