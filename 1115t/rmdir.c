#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	if (rmdir("LINUX") == -1) {
		perror("LINUX");
		exit(1);
	}
}
