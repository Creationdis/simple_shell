#include "shell.h"

/**
 * compare_strings - Compare two strings.
 * @str1: The first string.
 * @str2: The second string.
 *
 * Return: 0 if the strings are equal
 * or a positive number if str1 is greater than str2.
 */

int compare_strings(char *str1, char *str2)
{
int i;
int diff;

for (i = 0; str1[i] != '\0'; i++)
{
diff = str1[i] - str2[i];
if (diff > 0 || diff < 0)
{
return (diff);
}
}

return (0);
}
