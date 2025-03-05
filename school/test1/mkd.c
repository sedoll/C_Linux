#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	if(mkdir("LINUX", 0755) == -1) {
		perror("Making LINUX Directory");
		exit(1);
	}
}
