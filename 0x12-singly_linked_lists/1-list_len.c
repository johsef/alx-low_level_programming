#include "lists.h"
/**
 * list_len - a function that returns the number of
 * elements of a linked list_t list
 * @h: pointer to head node
 *
 * Return: number of elements of linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
