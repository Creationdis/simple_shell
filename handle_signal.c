#include "shell.h"

/**
 * handle_signal - keeps track of interactive mode
 * @m: the signal number
 *This function is responsible for handling signals during interactive mode. It takes
  the signal number as a parameter and performs necessary actions
 * Return: void
 */
void handle_signal(int m)
{
(void)m;
write(STDERR_FILENO, "\n", 1);
write(STDERR_FILENO, "$ ", 2);
}
