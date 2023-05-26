#include "shell.h"

/**
 * tokenize_string - Tokenize a string based on delimiters.
 * @str: The string to tokenize.
 * @delim: The delimiters to use for tokenization.
 *
 * Return: A pointer to the token, or NULL if no more tokens are found.
 */

char *tokenize_string(char *str, char *delim)
{
static char *next_token;
char *token_start;

if (str != NULL)
next_token = str;

if (next_token == NULL || *next_token == '\0')
return NULL;

for (; *next_token != '\0' && find_character(delim, *next_token) != NULL; next_token++);

if (*next_token == '\0')
{
next_token = NULL;
return (NULL);
}

token_start = next_token;

for (; *next_token != '\0' && find_character(delim, *next_token) == NULL; next_token++);

if (*next_token != '\0')
{
*next_token = '\0';
next_token++;
}
else
{
next_token = NULL;
}

return (token_start);
}
