#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * in a linked listint_t list.
 * @h : Address of the head of the listint_t list.
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	if (h != NULL)
	{
		while (h)
		{
			count += 1;

			h = h->next;
		}

		return (count);
	}
}
