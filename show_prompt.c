#include "main.h"

/**
* show_prompt - prints the prompt to the screen
* Returns nothing and takes no arguments
*/

void show_prompt(void)
{
char buf[] = "$ ";
ssize_t bytes_written;

bytes_written = write(STDOUT_FILENO, buf, strlen(buf));
if (bytes_written == -1)
{
perror("write");
exit(EXIT_FAILURE);
}
}
