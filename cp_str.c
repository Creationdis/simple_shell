#include "shell.h"

/**
 * copy_string - Copy a string to a destination.
 * @destination: Address where the string will be copied to.
 * @source: Original string to be copied.
 *
 * Return: A pointer to the destination string.
 */
 
char *copy_string(char *destination, char *source)
{
int i;

for (i = 0; source[i] != '\0'; i++)
{
destination[i] = source[i];
}
destination[i] = '\0';

return (destination);
}
