#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to head of linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *traverse = head;

	while (traverse != NULL)
	{
		listint_t *tmp;

		tmp = traverse;
		traverse = traverse->next;
		free(tmp);
	}
}
