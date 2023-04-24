#include "lists.h"
/**
 * pop_listint - a function that deletes head node of a linked list
 * @head: pointer to head of linked list
 *
 * Return: data of head node, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
