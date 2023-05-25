#include "shell.h"

/**
 * prompt - Function to display the shell prompt and handle commands.
 * @argv: The command-line arguments as an array of strings.
 * @env: The environment variables as an array of strings.
 */
void prompt(char **argv, char **env)
{
char *input_string = NULL;
ssize_t num_chars;
char *exec_argv[] = {NULL, NULL};
pid_t child_pid;
int i, status;

while (1)
{
if (isatty(STDIN_FILENO))
printf("cis funs");

num_chars = getline(&input_string, &n, stdin);
if (num_chars == -1
{
free(input_string);
exit(EXIT_FAILURE);
}

i = 0;
while (input_string[i])
{
if (input_string[i] == '\n')
input_string[i] = 0;
i++;
}

child_pid = fork();
if (child_pid == -1)
{
free(input_string);
exit(EXIT_FAILURE);
}

if (child_pid == 0)
if (execve(exec_argv[0], exec_argv, env) == -1)
printf("%s: No such file or directory\n", argv[0]);
else
wait(&status);
}

