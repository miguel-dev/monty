#define EMMA
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
	if (!tokenarg1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		error_flag = 1;
		free(element);
		return;
	}
	if (tokenarg1 != NULL && is_integer(tokenarg1) == 1)
		number = atoi(tokenarg1);
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		error_flag = 1;
		free(element);
		return;
	}
	element->n = number;
	if (*top == NULL)
	{
		element->next = NULL;
		element->prev = NULL;
	}
	else
	{
		(*top)->prev = element;
		element->next = (*top);
		element->prev = NULL;
	}
	*top = element;
}
