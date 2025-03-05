#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t pid;
	printf("hello!\n");
	pid = fork();
	
	if(pid > 0) { /* parent process */
		printf("parent\n");
		sleep(5);
	}
	else if (pid == 0) { /*child process */
		printf("child\n");
		execl("/bin/ls", "ls", "-l", (char *)0);
		printf("fail to execute ls\n");
	}
	else 
		printf("parent : fail to fork\n");
	printf("bye\n");
}
