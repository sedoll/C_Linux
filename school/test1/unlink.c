#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	struct stat statbuf;

	stat("linux.ln", &statbuf);
	printf("1.linux.ln : Link Count = %d\n", (int)statbuf.st_nlink);
	
	sleep(5);
	
	unlink("linux.ln");

	sleep(5);

	stat("linux.txt", &statbuf);
	printf("2.linux.txt Link Count = %d\n", (int)statbuf.st_nlink);

	sleep(5);

	unlink("linux.sym");
}
