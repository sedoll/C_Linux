#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
	if((rename("LINUX", "LINUXforever") == -1) {
		perror("rename");
		exit(1);
	}
}
