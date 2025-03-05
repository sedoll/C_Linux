#include <syslog.h>
#include <stdio.h>

int main() {
	FILE *f;
	f = fopen("not_here", "r");
	if(!f)
		// %m에 f를 넣어 출력
		syslog(LOG_ERR|LOG_USER, "OOOOOOOOPs ! - %m\n");
}
