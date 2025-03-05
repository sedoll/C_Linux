#include <stdio.h>
#include <stdlib.h>

int main() {
	// 이름이 충돌되지 않도록 시스템에서 임의로 지정
	char temppath[]="/tmp/tempFile_XXXXXX";
	int fd;

	fd = mkstemp(temppath);
	if(fd > 0) {
		printf("Temporary File Name: %s \n:", temppath);
		printf("File Desc: %d\n", fd);
	}
	else
		printf("mkstemp Error\n");
}
