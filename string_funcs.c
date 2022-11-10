#include "shell.h"
/**
 *_strlen - finds the length of a string
 *@str: string, whos length is to be calculated
 *Return: length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 *_strdup - duplicates a string
 *@str: string to duplicate
 *Return: pointer  duplicated atring
 */
char *_strdup(char *str)
{
	int i = 0, len;
	char *buffer;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i++] = '\0';
	return (buffer);
}
