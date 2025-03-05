#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main() {
	struct stat statbuf;

	chmod("linux.txt", S_IRWXU);

	stat("linux.txt", &statbuf);
	printf("1.Mode=%o\n", (unsigned int)statbuf.st_mode);

	statbuf.st_mode &= ~(S_IRUSR);
	statbuf.st_mode |= S_IRGRP;
	statbuf.st_mode |= S_IWOTH;

	chmod("linux.txt", statbuf.st_mode);

	stat("linux.txt", &statbuf);
	printf("2.Mode=%o\n", (unsigned int)statbuf.st_mode);

	statbuf.st_mode &= ~(S_IRWXU);
	statbuf.st_mode &= ~(S_IRWXG);
	statbuf.st_mode &= ~(S_IRWXO);

	chmod("linux.txt", statbuf.st_mode);

	stat("linux.txt", &statbuf);
	printf("3.Mode=%o\n", (unsigned int)statbuf.st_mode);
}
