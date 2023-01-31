#include "lists.h"

/**
 * print_listint - Prints all the elements
 * of a listint_t list.
 * @h : Address of the head of the listint_t list.
 * Return: Number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	if (h != NULL)
	{

		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count += 1;
		}

		return (count);
	}
}
