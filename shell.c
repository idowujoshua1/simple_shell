#include "main.h"

/**
* main - entry point for the shell project
* Return: 0
*/

int main(void)
{
char *line_command, *get_path_variable;
const char *file_path;
char **command_tokens = NULL;
char **directory_tokens = NULL;

while (true)
{
show_prompt();
line_command = receive_input();
if (line_command == NULL)
{
free(line_command);
break;
}
command_tokens = tokenize_command(line_command, " ");
get_path_variable = _getenv("PATH");
directory_tokens = tokenize_command(get_path_variable, ":");
file_path = search_path(command_tokens[0], *directory_tokens);
if (file_path != NULL)
{
execute_command(command_tokens, file_path);
}
else
{
printf("Error: command not found\n");
}
}
free_tokens(command_tokens);
free_tokens(directory_tokens);
free(line_command);
return (0);
}

