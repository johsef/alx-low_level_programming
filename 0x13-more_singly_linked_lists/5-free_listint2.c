#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * and sets head to NULL
 * @head: pointer to head of linked list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse = *head;

	while (traverse != NULL)
	{
		listint_t *tmp = traverse;

		traverse = traverse->next;
		free(tmp);
	}
	*head = NULL;
}
