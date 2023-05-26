#include "shell.h"

/**
 * handle_special_variables - A function that handles special variables.
 * @args: Arguments.
 * @exit_status: Exit status.
 * Return: 0 on success.
 */

int handle_special_variables(char **args, int exit_status)
{
char *status_str = NULL;
char *pid_str = NULL;

if (compare_strings(args[0], "echo") == 0)
{
if (compare_strings(args[1], "$?") == 0)
{
status_str = convert_to_string(exit_status);
write(1, status_str, get_string_length(status_str));
write(1, "\n", 1);
return (1);
}
else if (compare_strings(args[1], "$$") == 0)
{
pid_str = convert_to_string(getpid());
write(1, pid_str, get_string_length(pid_str));
write(1, "\n", 1);
return (1);
}
}
return (0);
}
