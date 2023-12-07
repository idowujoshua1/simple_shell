#include "main.h"

/**
* tokenize_command - tokenizes the command line argument
* @command: pointer to the input command
* @delim: set of bytes that delimit the tokens in the parsed string
* Return: pointer to tokenized string
*/

char **tokenize_command(char *command, const char *delim)
{
char **tokens;
char *token;
int token_count = 0;

tokens = malloc(1024 * sizeof(char *));
if (tokens == NULL)
{
perror("malloc");
exit(EXIT_FAILURE);
}

token = strtok(command, delim);
while (token != NULL)
{
/*save a copy of the token*/
tokens[token_count] = strdup(token);

if (tokens[token_count] == NULL)
{
perror("strdup");
exit(EXIT_FAILURE);
}

token_count++;
token = strtok(NULL, delim);
}
tokens[token_count] = NULL;

return (tokens);
}
