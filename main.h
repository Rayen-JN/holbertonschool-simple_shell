#ifndef HEADERFILE
#define HEADERFILE

extern char **environ;

#define RAYEN 1
#define BUFFER_SIZE 64
#define DELIME " \t\r\n\a"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>


int	execute(char *command[]);
int handel(char *buffer);
char **lsh_split_line(char *line);
int main(void);
char *_getenv(const char *name);

#endif
