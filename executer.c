#include "shell.h"
/**
 *execute - executes a command
 *@tokens: command to be executed
 */
void execute(char **tokens, char **environment)
{
	int pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(tokens[0], tokens, environment) == -1)
		{
			perror("Error");
			exit(-1);
		}
		else
			exit(1);
	}
	else
	{
		wait(&status);
	}
}
