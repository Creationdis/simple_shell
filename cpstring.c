#include "shell.h"

/**
 * copyString - Copies a string from source to destination.
 * @src: The source string.
 * @dest: The destination string.
 * Return: The destination string.
 */
char *copyString(char *dest, char *src)
{
int length = 0, index;

while (src[length] != '\0')
length++;

for (index = 0; index <= length; index++)
dest[index] = src[index];

return (dest);
}

