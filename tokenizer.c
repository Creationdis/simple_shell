#include "shell.h"

/**
* tokenizer - creates a tokens from given input line
* @line: line be tokenized
* Return: array of strings
*/

char **tokenizer(char *line)
{
char *buf = NULL, *bufp = NULL, *token = NULL, *delim = " :\t\r\n";
char **tokens = NULL;
int tokensize = 1;
size_t i = 0, flag = 0;

buf = _strdup(line);
if (!buf)
return (NULL);
bufp = buf;

while (*bufp)
{
if (_strchr(delim, *bufp) != NULL && flag == 0)
{
tokensize++;
flag = 1;
}
else if (_strchr(delim, *bufp) == NULL && flag == 1)
flag = 0;
bufp++;
}
tokens = malloc(sizeof(char *) * (tokensize + 1));
token = strtok(buf, delim);
while (token)
{
tokens[i] = _strdup(token);
if (tokens[i] == NULL)
		{
free(tokens);
return (NULL);
}
token = strtok(NULL, delim);
i++;
}
tokens[i] = '\0';
free(buf);
return (tokens);
}
