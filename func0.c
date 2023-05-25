#include "shell.h"

/**
 * concatenateStrings - Concatenates one string to another.
 * @dest: The string to concatenate to.
 * @src: The string to concatenate from.
 * Return: The concatenated string.
 */
char *concatenateStrings(char *dest, char *src)
{
int destLength = 0;
int srcLength = 0;

while (dest[destLength] != '\0')
destLength++;

while (src[srcLength] != '\0')
{
dest[destLength] = src[srcLength];
destLength++;
srcLength++;
}

dest[destLength] = '\0';

return (dest);
}

