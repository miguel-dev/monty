#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: Address of the top element of the stack.
 * @line_number: Number of line.
 */
void push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
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
