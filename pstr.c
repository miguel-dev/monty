#include "monty.h"

/**
 * pstr - Prints the char at the top of the stack, followed by a new line.
 * @stack: Stack.
 * @line_number: Number of line.
 */
void pstr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	int c;
	stack_t *top_stack = NULL;

	if (*stack == NULL)
		printf("\n");
	top_stack = *stack;
	while(top_stack != NULL)
	{
		c = top_stack->n;
		if (c >= 1 && c <= 127)
		{
			printf("%c", (char) c);
			top_stack = top_stack->next;
		}
		else
		{
			printf("\n");
			return;
		}
	}
	printf("\n");
}
