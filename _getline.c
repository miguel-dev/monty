#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *file;
	char *linenumber = NULL;
	size_t len = 0, i = 0;
	ssize_t read;
	char *tokensline[10];

	file = fopen("archivo", "r");
	if (file == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&linenumber, &len, file)) != -1)
	{
		printf("%s", linenumber);
		tokensline[i] = strtok(linenumber, " \n");
		printf("tokens 0: %s\n", tokensline[i]);
		while (i < 10)
		{
			i++;
			tokensline[i] = strtok(NULL, " \n");
			if (i == 9 || tokensline[i] == NULL)
				break;
		}
	}
	free(linenumber);
	exit(EXIT_SUCCESS);
}
