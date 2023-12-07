#include "main.h"

/**
* free_tokens - frees the memory allocated for the tokens
* @tokens: pointer to array of tokens
*/

void free_tokens(char **tokens)
{
int i;

for (i = 0; tokens[i] != NULL; i++)
{
/*free each token*/
free(tokens[i]);
}
/*free the array of tokens*/
free(tokens);
}
