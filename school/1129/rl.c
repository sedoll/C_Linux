#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	char buf[BUFSIZ];
	int n;

	n = readlink("linux.sym", buf, BUFSIZ);
	if (n == -1) {
		perror("readlink");
		exit(1);
	}

	buf[n] = '\0';
	printf("readlink() - linux.sym : READLINK = %s\n", buf);

	realpath("linux.sym", buf);
	printf("realpath() - linux.sym : REALPATH = %s\n", buf);
}
