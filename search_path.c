#include "main.h"

/**
* search_path - searches for a command in the PATH
* @command: command to search for
* @path_directories: directories to search in
* Return: full path to the command or NULL if not found
*/
const char *search_path(char *command, char *path_directories)
{
int i = 0;
const char *full_path = NULL;
char temp_path[1024];

while (path_directories[i] != '\0')
{
strcpy(temp_path, &path_directories[i]);
strcat(temp_path, "/");
strcat(temp_path, command);
printf("Temp path: %s\n", temp_path);
if (access(temp_path, X_OK) == 0)
{
full_path = strdup(temp_path);
printf("Full path: %s\n", full_path);
return (full_path);
}
i++;
}
return (full_path);
}
