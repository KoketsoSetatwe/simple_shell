#include "shell.h"
/**
 * our_strlen - Determines the length of a string
 * @str: The input string
 * Return: The number of characters in the string
 */
size_t our_strlen(const char *str)
{
	size_t j = 0;

	while (str[j] != '\0')
		j++;
	return (j);
}

