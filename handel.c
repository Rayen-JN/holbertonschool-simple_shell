#include "main.h"
/**
 * handel - handel the command
 * @buffer: command
 * Return: status
*/
int handel(char *buffer)
{
	int f, pid;
	char **ex = malloc(1024);

	ex = lsh_split_line(buffer);
	pid = fork();
	if (pid == -1)
	{
		exit(98);
	}
	else if (pid == 0)
	{
		f = execute(ex);
	}
	else
		wait(NULL);
	
	return (f);
}
