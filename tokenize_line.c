#include "shell.h"
#define MAX_TOKENS 64

/**
 * tokenize_line - Tokenizes a given line.
 * @line: The line to be tokenized.
 * Return: A pointer to the tokens, or NULL on failure.
 */

char **tokenize_line(char *line)
{
int i = 0;
char *token = NULL;
static char *tokens[MAX_TOKENS];
char *delimiter = " \t\n:";

set_memory(tokens, 0, sizeof(char *) * MAX_TOKENS);
token = tokenize_string(line, delimiter);
while (token != NULL && i < MAX_TOKENS - 1)
{
tokens[i] = token;
i++;
token = tokenize_string(NULL, delimiter);
}
if (token == NULL && tokens[0] == NULL)
return NULL;
return (tokens);
}
