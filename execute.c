#include "main.h"
/**
 *execute_the_line - the function to use execve while executing the line
 *@buffer: the buffer with the whole command
 *Return: integer of the status
 */
int execute(char *buffer[])
{
	int v = 0;
	char path[1024] = "/bin/";
	char s = '/';
	char f = buffer[0][0];

	if (f == s)
	{
		execve(buffer[0], buffer, environ);
	}
	else
	{
		
		strcat(path, buffer[0]);
		v = execve(path, buffer, environ);
	}
	if (v == -1)
	{
		printf("%s; command not found\n", buffer[0]);
	}
	return (v);
}
