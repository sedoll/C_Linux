#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	struct stat statbuf;

	stat("linux.txt", &statbuf);
	printf("1.linux.txt : Link Count = %d\n", (int)statbuf.st_nlink);
	
	unlink("linux.txt");
}
