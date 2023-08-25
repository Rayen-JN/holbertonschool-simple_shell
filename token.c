#include "main.h"
/**
 * lsh_split_line - this function to split lines
 * @line: line to split
 * Return: token
 */


char **lsh_split_line(char *line)
{
	int bufsize = BUFFER_SIZE, i = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("Allocation error");
		free(line);
		exit(98);
	}

	token = strtok(line, DELIME);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;

		if (i >= bufsize)
		{
			bufsize += BUFFER_SIZE;
			tokens = realloc(tokens, bufsize * sizeof(char *));
			if (!tokens)
			{
				perror("Reallocation error");
				exit(98);
			}
		}

		token = strtok(NULL, DELIME);
	}
	tokens[i] = NULL;
	return (tokens);
}
