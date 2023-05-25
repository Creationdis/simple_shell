#include "shell.h"

/**
 * main - function of the program.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments as an array of strings.
 * @env: The environment variables as an array of strings.
 * Return: 0 indicating successful execution.
 */

int main(int argc, char **argv, char **env)
{
if (argc == 1)
prompt(argv, env);
return (0);
}
