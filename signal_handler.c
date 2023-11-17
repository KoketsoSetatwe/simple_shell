#include "shell.h"

/**
 * our_strlen - Calculate the length of a string
 * @str: The input string
 * Return: The number of characters in the string
 */
size_t our_strlen(const char *str);

/**
 * signal_handler - Handles signals for Ctrl+C
 * @signal: The signal number
 * Return: Nothing
 */
void signal_handler(int _signal)
{
	char *_prompt = "\n$ ";

	(void)_signal;
	write(1, _prompt, our_strlen(_prompt));
	fflush(stdout);
}
