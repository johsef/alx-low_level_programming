#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes
 * a new node at a given position
 * @head: double pointer to start of node
 * @index: index to add new node
 *
 * Return: 1 if success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;

	listint_t *prev;
	unsigned int count = 0;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (index > len)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp || count < index)
	{
		prev = tmp;
		tmp = tmp->next;
		count++;
		if (index == count)
			prev->next = tmp->next;
	}
	free(tmp);
	return (1);
}
