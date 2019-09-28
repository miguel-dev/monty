#include "monty.h"

/**
 * pchar - Prints the char at the top of the stack, followed by a new line.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int c;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		error_flag = 1;
		return;
	}

	c = (*stack)->n;
	if (c >= 0 && c <= 127)
	{
		printf("%c\n", (char) c);
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		error_flag = 1;
		return;
	}
}
