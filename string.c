#include "shell.h"

/**
 * string_concatenate - Concatenate two strings.
 * @destination: The destination string.
 * @source: The string to be appended.
 *
 * Return: A pointer to the resulting string.
 */

char *string_concatenate(char *destination, char *source)
{
int dest_length = 0;
int source_length = 0;
int i;

while (destination[dest_length] != '\0')
{
dest_length++;
}

while (source[source_length] != '\0')
{
source_length++;
}

for (i = 0; i <= source_length; i++)
{
destination[dest_length + i] = source[i];
}

return (destination);
}
