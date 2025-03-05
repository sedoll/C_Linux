#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main() {
	struct stat statbuf;

	stat("linux.txt", &statbuf);
		printf("Mode = %o\n", (unsigned int)statbuf.st_mode);

	// owner 읽기 권한
	if ((statbuf.st_mode & S_IREAD) != 0)
		printf("linux.txt: User has a read permission\n");
	if ((statbuf.st_mode & S_IRUSR) != 0)
		printf("linux.txt: User has a read permission\n");

	// group 읽기권한
	if ((statbuf.st_mode & (S_IREAD >> 3)) != 0)
		printf("linux.txt: Group has a read permission\n");
	if ((statbuf.st_mode & S_IRGRP) != 0)
		printf("linux.txt: Group has a read permission\n");

	//others 읽기권한
	if ((statbuf.st_mode & (S_IREAD >> 6)) != 0)
		printf("linux.txt: Other has a read permission\n");
	if ((statbuf.st_mode & S_IROTH) != 0)
		printf("linux.txt: Other has a read permission\n");
	
	if ((statbuf.st_mode & S_IWUSR) != 0)
		printf("linux.txt: User has a write permission\n");
	if ((statbuf.st_mode & S_IWGRP) != 0)
		printf("linux.txt: Group has a write permission\n");
	if ((statbuf.st_mode & S_IWOTH) != 0)
		printf("linux.txt: Other has a write permission\n");
}
