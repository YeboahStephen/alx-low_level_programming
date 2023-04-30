#include "lists.h"

/**
 * free_listint - A function that free a listint_t
 * @head: Head of list
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
