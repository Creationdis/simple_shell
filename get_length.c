#include "shell.h"

/**
 * get_number_length - Calculates the length of a given number.
 * @number: The number to determine the length of.
 * Return: The length of the number.
 */

int get_number_length(unsigned int number)
{
int length = 0;

while (number != 0)
{
number = number / 10;
length++;
}

return (length);
}
