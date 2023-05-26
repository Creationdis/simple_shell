#include "shell.h"

/**
 * find_substring - Check if a substring is present in a given string.
 * @string: The string to search in.
 * @substring: The substring to find.
 *
 * Return: 0 if the substring is found, -1 otherwise.
 */

int find_substring(char *string, char *substring)
{
int i = 0;

while (string[i] != '\0')
{
for (i = 0; substring[i] != '\0'; i++)
{
if (substring[i] != string[i])
{
break;
}
}

if (substring[i] == '\0')
{
return (0);
}

string++;
}

return (-1);
}
