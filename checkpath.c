#include "shell.h"

/**
* test_path - check path is valid
* @path: tokenized path
* @cmd: command
* Return: path appended on success
* NULL on failure
*/
char *test_path(char **path, char *cmd)
{
int j = 0;
char *output_line;

while (path[j])
{
output_line = append_path(path[j], cmd);
if (access(output_line, F_OK | X_OK) == 0)
return (output_line);
free(output_line);
j++;
}
return (NULL);
}
