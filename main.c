#include "shell.h"

/**
 * main - function of the program.
 *
 * @param argc: The number of command-line arguments.
 * @param argv: The command-line arguments as an array of strings.
 * @param env: The environment variables as an array of strings.
 * return: The program's return value.
 */

int main( int argc , char **argv ,char **env)
{
if (argc == 1)
prompt (argv ,env);
return (0);
}
