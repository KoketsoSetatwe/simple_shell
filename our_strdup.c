#include "shell.h"
/**
 * our_strlen - Calculates the length of a string
 * @str: The input string
 * Return: The length of the string
 */
size_t our_strlen(const char *str);

/**
 * our_strdup - Duplicates a string
 * @str: The string to be duplicated
 * Return: The duplicated string
 */
char *our_strdup(const char *str)
{
	size_t _length = our_strlen(str) + 1;
	char *_new_str = (char *)malloc(_length);
	size_t j = 0;

	if (_new_str == NULL)
		return (NULL);

	for (; j < _length; j++)
		_new_str[j] = str[j];

	return (_new_str);
}
