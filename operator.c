#include "shell.h"

/**
 * handle_separator_operator - the function handles the separator operators.
 * @line:  string.
 * @argv: A vector of arguments.
 * @env: An array of environment variables.
 * Return: 1 on success, otherwise 0.
 */
int handle_separator_operator(char *line, char **argv, char **env)
{
int switch_cmds = 0, i = 0;
static char *cmds[] = {";", "&&", "||"};

if (line == NULL)
return (0);

while (i <= 2)
{
if (compare_strings(find_substring(line, cmds[i]), cmds[i]) == 0)
{
switch_cmds = i + 1;
break;
}
i++;
}

switch (switch_cmds)

return (0);
}
