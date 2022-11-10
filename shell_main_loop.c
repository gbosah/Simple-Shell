#include "shell.h"
/**
 *main - shellloop
 *@argc: arguments count(No of args passed)
 *@argv: arguments passed
 *@env: environment
 *Return: always 0
 */
int main(int argc, char **argv, char **env)
{
	char **tokens = NULL;
	char *buf = NULL;
	int str_no;
	size_t buf_length = 1024;

	if (argc < 1 || !argv)
		return (-1);
	while (1)
	{
		show_prompt();
		str_no = getline(&buf, &buf_length, stdin);
		if (str_no < 0)
			break;
		if (buf[str_no - 1] == '\n')
			buf[str_no - 1] = '\0';
		tokens = _strtok(buf);
		if (tokens == NULL || *tokens == NULL || **tokens == '\0')
			continue;
		execute(tokens, env);
		/*free_tok(tokens);*/
	}
	free(buf);
	return (0);
}
