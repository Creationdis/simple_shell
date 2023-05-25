#include "shell.h"

/**
 * countArguments - Counts the number of arguments in a command line.
 * @line: The command line.
 * Return: The number of arguments.
 */
int countArguments(char *line)
{
int index = 0;
int searchSpace = 1;
int numArgs = 0;

while (line[index] != '\0')
{
if (line[index] != ' ' && searchSpace == 1)
{
numArgs++;
searchSpace = 0;
}
if (line[index + 1] == ' ')
searchSpace = 1;
index++;
}

return (numArgs);
}

