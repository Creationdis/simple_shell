#include "shell.h"

/**
 * get_built_in - checks for built-in commands
 * @command: command string
 * Return: 0 if command is built-in, -1 otherwise
 */
int get_built_in(char *command)
{
int result = -1;

if (strlen(command) == 4 && our_strncmp(command, "exit", 4) == 0)
result = 0;
else if (strlen(command) == 3 && our_strncmp(command, "env", 3) == 0)
result = 1;
return (result);
}

