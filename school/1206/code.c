#include <stdio.h>
#include <stdio.h>

int main() {
	printf("Running ps with execlp\n");
	execlp("ls", "ls", 0);
	printf("Done.\n");
	exit(0);
}
