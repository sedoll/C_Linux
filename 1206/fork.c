#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t pid;
	char *message;
	int n;
	printf("fork program starting\n");
	pid = fork();
		switch(pid) { // 여기서부터 parent와 child가 서로 공유
			case -1: //실패
				perror("fork failed");
				exit(1);
			case 0: // child process
				message = "This is the child";
				n = 5; // count
				break;
			default: // parent process
				message = "This is the parent";
				n = 3; // count
				break;
			}
		for(; n>0; n--) {
			puts(message);
			sleep(5);
		}
		exit(0);
	}
