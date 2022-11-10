#include "shell.h"
/**
 *_strtok - Divides user input string to tokens
 *@buf: tge uinput string
 *Return: tokens(array of tokens(
 */
char **_strtok(char *buf)
{
	int i = 0;
	size_t char_size = _strlen(buf);
	char *delim = " \t\r\n";
	char **tokens = malloc(sizeof(char) * char_size);
	char *token;

	if (buf[char_size - 1] == '\n')
		buf[char_size - 1] = '\0';
	token = strtok(buf, delim);
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
