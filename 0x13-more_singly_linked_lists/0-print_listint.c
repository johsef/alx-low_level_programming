#include "lists.h"
/**
 * print_listint - Prints number of nodes of linked list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
