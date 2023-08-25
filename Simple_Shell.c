#include "main.h"
/**
 * main - the main function
 * Return: NULL
 */

int main(void)
{
	size_t buffer_size = 1024;
	char *buffer = NULL;
	int input_line;


	while (RAYEN)
	{
		printf("$ ");
		input_line = getline(&buffer, &buffer_size, stdin);

		if (input_line == EOF)
		{
			free(buffer);
			exit(0);
		}
		if (strcmp(buffer, "exit\n") == 0)
		{
			free(buffer);
			exit(0);
		}
		else
		handel(buffer);
	}
	return (0);
}
