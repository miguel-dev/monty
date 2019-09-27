#include "monty.h"

/**
 * pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: stack.
 * @line_number: Number indicating line.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
	printf("%d", (*stack)->n);
}
