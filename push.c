#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @top: Addess of the top element of the stack.
 * @line_number: number of the line
 */
void push(stack_t **top, unsigned int line_number)
{
	stack_t *element;
	char *tokenarg1;
	int number = 0;

	element = malloc(sizeof(stack_t));
	if (element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	tokenarg1 = strtok(NULL, " \n\t");
	if (is_integer(tokenarg1) == 1 && tokenarg1 != NULL)
		number = atoi(tokenarg1);
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (*top == NULL)
	{
		element->n = number;
		element->next = NULL;
		element->prev = NULL;
		*top = element;
	}
	else
	{
		element->n = number;
		(*top)->prev = element;
		element->next = (*top);
		element->prev = NULL;
		*top = element;
	}
}
