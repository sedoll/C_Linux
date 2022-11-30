#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	if (rmdir("LINUX") == -1) {
		perror("LINUX");
		exit(1);
	}
}
