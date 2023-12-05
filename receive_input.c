#include "main.h"

/**
* receive_input - reads input from the keyboard
* @command_line_input: user typed command
* Return: pointer to the typed command
*/

char *receive_input(char *command_line_input)
{

size_t length = 0;
ssize_t input;

input = getline(&command_line_input, &length, stdin);
if (input == -1)
{
if (command_line_input != NULL)
{
free(command_line_input);
}
command_line_input = NULL;
return (NULL);
}

return (command_line_input);
}

