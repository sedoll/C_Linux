#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void sig_handler(int signo) {
	psignal(signo, "Received Signal");
}

int main() {
	signal(SIGALRM, sig_handler);
	
	// 3초를 쉬는데 2초에 알람을 실행
	alarm(7);
	printf("Wait...\n");
	sleep(10);
}
