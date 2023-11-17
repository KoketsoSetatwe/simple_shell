#include "shell.h"
/**
 * our_strcmp - Copies a string from the source to the 
 * destination buffer, including the null terminator.
 * @string1: The string to be copied into.
 * @string2: The string to be copied.
 *
 * Return: The final string
 */
int our_strcmp(const char *_string1, const char *string2)
{
	while (*_string1 && *string2 && *_string1 == *string2)
	{
		_string1++;
		string2++;
	}

	return ((int)(*_string1 - *string2));
}
