#include "shell.h"

/**
 * duplicateString - Duplicates a string to a new one.
 * @str: The string to duplicate.
 * Return: The duplicated string.
 */

char *duplicateString(char *str)
{
int length = 0, index = 0;
char *buffer;

if (!str)
return (NULL);

while (str[length] != '\0')
length++;

buffer = malloc(sizeof(char) * (length + 1));
if (!buffer)
return (NULL);

while (str[index] != '\0')
{
buffer[index] = str[index];
index++;
}
buffer[index] = '\0';

return (buffer);
}

