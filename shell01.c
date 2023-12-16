#include "shell.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t my_child = fork();
	char buf; 
	size_t size = 10;
	
	while (true)
	{
		 write(1, "$ ", 1);
		 buf = malloc(sizeof(*buf) + 10)
		 getline(buf, &size, stdin)
	}


		if (my_child == 0)
		{
			execve("/bin/cat", argv, NULL);
		}
		wait(NULL);
		printf("List elements in the file\n");
}
