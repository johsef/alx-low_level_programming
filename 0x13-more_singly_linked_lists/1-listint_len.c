#include "lists.h"
/**
 * listint_len - Prints number of elements of linked list
 * @h: pointer to head of linked list
 *
 * Return: number of elements of linked listt
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
