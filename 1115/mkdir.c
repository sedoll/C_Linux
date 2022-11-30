#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
	if (mkdir("LINUX", 0755) == -1) {
		perror("Making LINUX Directory");
		exit(1);
	}
}
