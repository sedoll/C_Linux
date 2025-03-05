#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int main() {
	printf("Before SIGCONT Signal to parent.\n");
	kill(getppid(), SIGCONT); //parent pid를 가져와서 재시작

	printf("Before SIGQUIT Signal to me.PID : %d\n", getpid());
	kill(getpid(), SIGQUIT);

	printf("After SIGQUIT Signal.\n");
}
