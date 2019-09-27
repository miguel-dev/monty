#include "monty.h"

/**
 * swap - Doesn't do anything.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void swap(stack_t **stack, unsigned int line_number)
{

	stack_t *aux;
	int n = 0;

	if ((*stack)->next->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack to short\n", line_number);
		error_flag = 1;
		return;
	}
	aux = (*stack)->next;
	n = (*stack)->n;
	(*stack)->n = aux->n;
	aux->n = n;
}
