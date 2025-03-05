#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char *cwd;
	int fd;

	cwd = getcwd(NULL, BUFSIZ);
	printf("1.Current Directory: %s\n", cwd);
	
	// 파일디스크립트 형태로 값을 받음
	fd = open("LINUXforever", O_RDONLY);
	fchdir(fd);

	cwd = getcwd(NULL, BUFSIZ);
	printf("2.Current Directory: %s\n", cwd);
	
	close(fd);
	free(cwd);
}
