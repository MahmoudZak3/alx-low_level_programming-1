#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Finds returns the number of elements in
 *            a linked list_t list.
 * @h: The  list_t list linked list_t list.
 * @elements: a counter var for size_t (nodes)
 *
 * Return:  elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
