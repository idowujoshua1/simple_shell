#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t my_child = fork();
	char *argv[] = {"cat", "main.h", NULL};

		if (my_child == 0)
		{
			execve("/bin/cat", argv, NULL);
		}
		wait(NULL);
		printf("List elements in the file\n");
}
