#include "monty.h"

/**
 * get_opcode - Returns a pointer to the function performing the operation
 * indicated by the opcode.
 * @s: String containing the opcode.
 *
 * Return: Pointer to a function or NULL if it doesn't exist.
 */
ptr_to_func get_opcode(char *s)
{
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"nop", nop},
		{"pop", pop},
		{"swap", swap},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"stack", stack},
		{"queue", queue},
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
