#include "monty.h"

/**
 * pop - Doesn't do anything.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void pop( stack_t **stack  unsigned int line_number)
{

	stack_t *aux;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		error_flag = 1;
		return;
	}
	aux = (*stack)->next;
	free(*stack);
	*stack = aux;
}
