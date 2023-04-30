#include "lists.h"

/**
 * sum_listint - A function that return the sum of
 * all the data of a listint_t linked list
 * @head: head of a list.
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
