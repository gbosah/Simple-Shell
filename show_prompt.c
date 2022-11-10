#include "shell.h"
/**
 *show_prompt - Disolys tge prompt when in interactive mode
 */
void show_prompt(void)
{
	if (isatty(STDIN_FILENO) && isatty(STDOUT_FILENO))
		write(1, "-# ", 3);
}
