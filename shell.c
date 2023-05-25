#include "shell.h"

/**
 * main - simple_shell.
 * @argc: argument count
 * @argv: pointer to array of strings of arguments victor
 * Return: 0
*/
int main(int argc _attribute_((unused)), char *argv[])
{
size_t line_length;
char *input_line = NULL, *command;
int nr_chars_read, loop_count = 0, status = 0;

while (1)
{
if (isatty(STDIN_FILENO) == 1)
write(STDOUT_FILENO, "#omar/sfn$ ", 11);
nr_chars_read = getline(&input_line, &line_length, stdin);
if (nr_chars_read >= 0)
{
input_line[nr_chars_read - 1] = '\0';
command = ignore_spaces(input_line);
if (!built_in(command, input_line, status))
status = super_execute(command, argv[0]);
free(input_line);
input_line = NULL;
}
else
{
free(input_line);
break;
}
loop_count++;
}
return (0);
}
