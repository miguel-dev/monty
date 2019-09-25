#include "monty.h"

/**
 * get_opcode - Returns a pointer to the function performing the operation
 * indicated by the opcode.
 * @s: String containing the opcode.
 *
 * Return: Pointer to a function or NULL if it doesn't exist.
 */
void (*get_opcode(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_s opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(opcodes[i].opcode, s) == 0)
			return (opcodes[i].f);
		i++;
	}
	return (NULL);
}
