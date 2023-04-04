#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	if (ptr == NULL)
		return;
	while (ptr->next != NULL)
	{
		listint_t *free_node;

		free_node = ptr;
		ptr = ptr->next;

		/* free(free_node->n); */
		/* free(free_node->next); */
		free(free_node);
	}

	/* free(ptr->n); */
	/* free(ptr->next); */
	free(ptr);
}
