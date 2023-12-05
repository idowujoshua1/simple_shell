#include "main.h"

/**
* main - entry point for the shell project
* @ac: number of arguments
* @av: command-line arguments
* @env: environment variables of the current program
* Return: 0
*/

int main(int ac, char **av, char **env)
{
char *line_command;
char **command_tokens = NULL;

while (true)
{
show_prompt();
line_command = receive_input(*av);
if (line_command == NULL)
{
free(line_command);
break;
}
command_tokens = tokenize_command(line_command, ac);
execute_command(command_tokens, env);
}
free(command_tokens);
free(line_command);
return (0);
}
