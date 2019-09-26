#include "monty.h"
/**
 * _getline - Function for get line by line into a file
 * @filename: Name of the file
 * Return: por definir
 */
void _getline(char *filename)
{
	FILE *file;
	char *linenumber = NULL;
	size_t len = 0;
	ssize_t read, lines = 1;
	char *tokencommand;
	stack_t **stack;
	ptr_to_func _function;

	stack = NULL;
	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&linenumber, &len, file)) != -1)
	{
		tokencommand = strtok(linenumber, " \n\t");
		if (tokencommand == NULL)
			exit(EXIT_FAILURE);
		_function = get_opcode(tokencommand);
		if (_function == NULL)
		{
			fprintf(stderr, "L<%ld>: unknown instruction <%s>",
			       lines, tokencommand);
			fclose(file);
			exit(EXIT_FAILURE);
		}
		_function(stack, lines);
	lines++;
	}
	free(linenumber);
	fclose(file);
}
