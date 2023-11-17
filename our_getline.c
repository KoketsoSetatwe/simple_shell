#include "shell.h"
/**
 * our_strlen - Custom implementation of the strlen function
 * @str: The input string
 * Return: The length of the string
 */

size_t our_strlen(const char *str);

/**
 * our_getline - Custom implementation of the strlen function
 * @line: Address of the line buffer
 * @len: Address of the length of the buffer
 * @stream: The stream to read from
 * Return: The number of characters read or -1 if failure
 */

ssize_t our_getline(char **_line, size_t *leng, FILE *stream)
{
	char *get_line;
	ssize_t read;

	if (*_line == NULL || *leng == 0)
	{
		*leng = 1024;
		*_line = malloc(*leng);
		if (*_line == NULL)
		{
			return (-1);
		}
	}

	get_line = fgets(*_line, *leng, stream);
	if (get_line != NULL)
	{
		read = our_strlen(*_line);

		if (read > 0 && (*_line)[read - 1] == '\n')
		{
			(*_line)[read - 1] = '\0';
			read--;
		}
		return (read);
	}
	else
	{
		return (-1);
	}
}
