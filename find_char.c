#include "shell.h"

/**
 * find_character - Finds the first occurrence of character 'c' in string 's'.
 * @s: The string to search in.
 * @c: The character to find.
 * Return: A pointer to the first occurrence of character 'c',
 * or NULL if not found.
 */

char *find_character(char *s, char c)
{
int index;

if (s == NULL)
return NULL;

for (index = 0; s[index] != '\0'; index++)
{
if (s[index] == c)
{
return (&s[index]);
}
}

if (s[index] == c)
{
return (&s[index]);
}

return (NULL);
}
