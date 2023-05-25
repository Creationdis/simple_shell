#include "shell.h"

/**
 * free_arguments - Free all memory allocated for arguments.
 * @args: Pointer to the argument array.
 */

void free_arguments(char **args)
{
int index = 0;

if (args != NULL)
{
while (args[index] != NULL)
{
free(args[index]);
index++;
}
free(args[index]);
free(args);

}
}
