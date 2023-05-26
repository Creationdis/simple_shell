#include "shell.h"

/**
 * handle_builtin_commands - the function handles the builtin cmd.
 * @str: string.
 * @args: An array arguments.
 * Return: 0 on success.
 */

int handle_builtin_commands(char **args, char *str)
{
int switch_cmds = 0, i = 0;
static char *cmds[] = {"env", "exit", "setenv", "unsetenv", "cd"};

if (args == NULL)
return (0);

while (i <= 4)
{
if (compare_strings(args[0], cmds[i]) == 0)
{
switch_cmds = i + 1;
break;
}
i++;
}

switch (switch_cmds)

return (0);
}
