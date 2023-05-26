#include "shell.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to array
 */

char *_strdup(char *str)
{
char *new;
int i, l;

if (str == NULL)
return (NULL);

l = _strlen(s);

new = malloc(sizeof(char) * (l + 1));
if (!new)
return (NULL);
for (i = 0; *str != '\0'; str++, i++)
new[i] = str[0];

new[i++] = '\0';
return (new);
}
