#include "shell.h"

/**
 * ignore_surrounded_spaces - Remove surrounding spaces from a command line.
 * @old_line: The original command line.
 * Return: The command line after removing spaces.
*/
char *ignore_surrounded_spaces(char *old_line)
{
char *end_of_line, *new_line = old_line;

while (*new_line == ' ')
new_line++;
end_of_line = new_line + (strlen(new_line) - 1);
while (end_of_line > new_line && *end_of_line == ' ')
end_of_line--;
*(end_of_line + 1) = '\0';
return (new_line);
}
