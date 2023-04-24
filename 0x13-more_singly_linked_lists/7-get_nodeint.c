#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: double pointer to head of linked list
 * @index: index of node starting at 0
 *
 * Return: address of node, 0 if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	unsigned int count = 0;

	while (tmp || count < index)
	{
		if (index == 0)
			return (tmp);
		tmp = tmp->next;
		count++;
		if (count == index)
			return (tmp);
	}
	return (NULL);
}
