#include "shell.h"
/**
 * is_built_in - checks if a command is a built-in command.
 * @cmd: command to check.
 * @free_line: line to free if it's an exit command.
 * @status: the status of the last process.
 * Return: 1 if it's a built-in command, 0 otherwise.
 */
int is_built_in(char *cmd, char *free_line, int status)
{
int is_builtin;

is_builtin = get_builtin(cmd);
if (is_builtin == 0)
{
free(free_line);
exit(WEXITSTATUS(status));
}
else if (is_builtin == 1)
{
print_env();
return (1);
}
return (0);
}

