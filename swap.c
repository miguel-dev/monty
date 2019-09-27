#include "monty.h"

/**
 * swap - Doesn't do anything.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void swap(stack_t **stack, unsigned int line_number)
{

	stack_t *aux1, *aux2;
	int n = 0, i = 0;

	aux1 = *stack;
	for (i = 0; aux1; i++)
		aux1 = aux1->next;

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		error_flag = 1;
		return;
	}
	aux2 = (*stack)->next;
	n = (*stack)->n;
	(*stack)->n = aux2->n;
	aux2->n = n;
}
