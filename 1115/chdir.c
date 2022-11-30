#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	char *cwd; // 시스템이 할당하는 버퍼의 주소 저장 변수


	cwd = getcwd(NULL, BUFSIZ);
	printf("1.Current Directory: = %s\n", cwd);

	chdir("LINUXforever");

	cwd = getcwd(NULL, BUFSIZ);
	printf("2.Current Directory: = %s\n", cwd);
	
	free(cwd);

}
