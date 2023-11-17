#include "shell.h"
/**
 * our_strcat - Joins two strings together.
 * @final_str: The string to which another string will be attached.
 * @str_to: The string to include.
 *
 * Return: A pointer to the resulting string
 */
char *our_strcat(char *final_str, char *str_to)
{
	int k, l;

	k = 0;
	while (final_str[k] != '\0')
		k++;

	l = 0;
	while (str_to[l] != '\0')
	{
		final_str[k] = str_to[l];
		l++;
		k++;
	}
	final_str[k] = '\0';

	return (final_str);
}
