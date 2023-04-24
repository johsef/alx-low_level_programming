#include "lists.h"
/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position
 * @head: double pointer to start of node
 * @idx: index to add new node
 * @n: data of new node to be added
 *
 * Return: Address of new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	unsigned int count = 0;
	unsigned int len = 0;

	listint_t *new_node;

	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	new_node = malloc(sizeof(listint_t));
	if (idx > len || new_node == NULL)
		return (NULL);
	new_node->n = n;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}
	idx = idx - 1;
	while (tmp || count < idx)
	{
		if (idx == count)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
		}
		tmp = tmp->next;
		count++;
	}
	return (new_node);
}
