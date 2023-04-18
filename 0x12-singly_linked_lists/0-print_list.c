#include "lists.h"
/**
  * print_list - a function that prints all the elements
  * of a list_t list
  * @h: pointer to head node
  *
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d %s\n]", h->len, h->str);
		else
			printf("[0] (nil)");
		h = h->next;
		count++;
	}
	return (count);
}
