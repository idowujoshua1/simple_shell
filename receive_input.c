#include "main.h"

/**
* receive_input - reads input from the keyboard
* Return: pointer to the typed command
*/

char *receive_input(void)
{
char *command = NULL;
size_t length = 0;
ssize_t input;

input = getline(&command, &length, stdin);
if (input == -1)
{
if (command != NULL)
{
free(command);
}
command = NULL;
return (NULL);
}
return (command);
}
