#include "shell.h"

/**
 * set_memory - Sets a block of memory to a specific value.
 * @ptr: Pointer to the memory block.
 * @value: The value to be set.
 * @size: Number of bytes to be set.
 * Return: A pointer to the first element of the modified memory block.
 */

void *set_memory(void *ptr, int value, size_t size)
{
size_t i;
char *mem = ptr;
char val = (char)value;

for (i = 0; i < size; i++)
{
mem[i] = val;
}

return (ptr);
}
