#include "shell.h"

/**
* prompt_user - Prints the shell prompt to indicate that the program
* is ready to accept user input.
* Return: void
*/
void prompt_user(void)
{
if (isatty(STDIN_FILENO)== 1 && isatty(STDOUT_FILENO)== 1)
flags.interactive = 1;

if (flags.interactive)
write(STDERR_FILENO, "$ ", 2);
}
