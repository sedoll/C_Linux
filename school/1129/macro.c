#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main() {
	struct stat statbuf;
	int kind;

	stat("linux.txt", &statbuf);
	
	printf("Mode = %o\n", (unsigned int)statbuf.st_mode);

	if(S_ISLNK(statbuf.st_mode))
		printf("linux.txt : Symbolic link\n");
	if(S_ISDIR(statbuf.st_mode))
		printf("linux.txt : dorectory\n");
	if(S_ISREG(statbuf.st_mode))
		printf("linux.txt : regular file\n");
}
