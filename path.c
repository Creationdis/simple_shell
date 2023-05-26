#include "shell.h"

/**
* append_path - to_command - includes the path in the command
* @path: the path of the command
* @command: the command entered by the user
* Return: buffer on success
* NULL on failure
*/
char *append_path(char *path, char *command)
{
char *buf;
size_t x = 0, y = 0;

if (command == 0)
command = "";

if (path == 0)
path = "";

buf = malloc(sizeof(char) * (_strlen(path) + _strlen(command) + 2));
if (!buf)
return (NULL);

while (path[x])
{
buf[x] = path[x];
x++;
}

if (path[x - 1] != '/')
{
buf[x] = '/';
x++;
}
while (command[y])
{
buf[x + y] = command[y];
y++;
}
buf[x + y] = '\0';
return (buf);
}
