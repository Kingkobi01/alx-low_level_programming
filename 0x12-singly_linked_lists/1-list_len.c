#include "lists.h"

/**
 * list_len - Returns the number of elements
 *			in a linked list_t list
 @h : list_ list
 Return: number of eleements
 */

size_t list_len(const list_t *h)
{
	size_t numOfElements = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		numOfElements++;
		h = h->next;
	}

	return (numOfElements);
}
