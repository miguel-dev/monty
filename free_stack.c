#include "monty.h"
/**
 * free_stack - Function that free a double linked list
 * @head: double pointer where start the list
 * Return: Nothing
 */
void free_stack(stack_t *head)
{
	stack_t *recorrer;

	recorrer = head;
	while (head)
	{
		recorrer = recorrer->next;
		free(head);
		head = recorrer;
	}
}
