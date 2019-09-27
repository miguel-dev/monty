#include "monty.h"

/**
 * sub - sub two first elements int the stack.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void sub(stack_t **stack, unsigned int line_number)
{

	stack_t *aux1, *aux2;
	int n = 0, i = 0;

	if (*stack == NULL)
	{
                fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
                error_flag = 1;
                return;
        }

	aux1 = *stack;
	n = aux1->n;

	for (i = 0; aux1; i++)
		aux1 = aux1->next;

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		error_flag = 1;
		return;
	}
	aux2 = (*stack)->next;
	free(*stack);
	*stack = aux2;
	if (n > (*stack)->n)
		(*stack)->n = n - (*stack)->n;
	else
		(*stack)->n = (*stack)->n - n;
}
