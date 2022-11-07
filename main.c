#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 *show_prompt - shows the shell prompt for command
 */
void show_prompt(void)
{
	write(1, "#", 3);
}
/**
 *main - shell.main program
 *@argc: charcater count
 *@argv: arguments vector
 *@env: shell environment
 *Return: 0
 */
int main(int argc, char **argv, char **env)
{
	char *buf[1024];
	size_t char_size = 1024;
	char *args[] = {buf[0], NULL};

	if (argc != 1)
		printf("Usage: %s", args[0]);
	while (1)
	{
		show_prompt();
		getline(buf, &char_size, stdin);
		printf("%s \n", buf[0]);
		if (execve(args[0], args, env) == -1)
		{
			printf("%s: No such file or directory\n", argv[0]);
		}
	}
	return (0);
}
