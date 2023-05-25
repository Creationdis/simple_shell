#include "shell.h"

/**
 * print_env - print all the environment variables.
 */
void print_env(void)
{
int index;

for (index = 0; environ[index]; index++)
{
write(STDOUT_FILENO, environ[index], _strlen(environ[index]));
write(STDOUT_FILENO, "\n", 1);
}
}
