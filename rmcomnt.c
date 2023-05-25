#include "shell.h"

/**
 * remove_comment - removes a comment from the command line.
 * @cmd_line: the command line.
 * Return: updated command line.
 */
char *remove_comment(char *cmd_line)
{
int index = 0;

if (strlen(cmd_line) >= 2)
{
while (cmd_line[index])
{
if (cmd_line[index] == '#' && cmd_line[index - 1] == ' ')
{
cmd_line[index - 1] = '\0';
break;
}
index++;
}
}
return (cmd_line);
}

