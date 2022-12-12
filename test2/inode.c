#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	struct stat statbuf1, statbuf2, statbuf3;
	lstat("linux.txt", &statbuf1);
	printf("linux.txt : inode = %d\n\n", (int) statbuf1.st_ino);
	
	link("linux.txt", "linux.ln");
	lstat("linux.ln", &statbuf2);
	printf("linux.ln : inode = %d\n\n", (int) statbuf2.st_ino);
	
	symlink("linux.txt", "linux.sym");
	lstat("linux.sym", &statbuf3);
	printf("linux.sym : inode = %d\n\n", (int) statbuf3.st_ino);
}
