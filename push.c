#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @top: Addess of the top element of the stack.
 */
void push(stack_t **top)
{
	stack_t *element;

	element = malloc(sizeof(stack_t));
	if (element == NULL)
		exit(EXIT_FAILURE);

	element->n = number;
	element->prev = NULL;
	element->next = *top;
	*top = element;
}
