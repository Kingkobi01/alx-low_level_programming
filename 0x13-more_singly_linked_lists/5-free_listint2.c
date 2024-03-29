#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * Description: This function frees the list
 * and sets head to NULL
 * @head : Pointer to the address of the head of the listint_t list.
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
	else
		return;
	free(*head);

	head = NULL;
}
