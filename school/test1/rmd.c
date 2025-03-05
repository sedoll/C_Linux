#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	if(rmdir("LINUX") == -1) {
		perror("Not Search LINUX Directory");
		exit(1);
	}
}
