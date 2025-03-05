#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {
	char c[20];
	scanf("%s", c);
	strcat(c, ".txt");
	if (access(c, F_OK) == -1) {
		if (errno == 2){
			//printf("errno=%d\n", errno);
			printf("파일이 존재하지 않습니다.\n");
		}
	}
	else {
		printf("성공\n");
	}
}
