#include <stdio.h>
#include <sys/stat.h>
#include <stdio.h>

int main() {
	if (rename("LINUX", "LINUXforever") == -1) {
		perror("rename");
		exit(1);
	}
}
