#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main() {
	int v = access("test.txt", R_OK);
	if(v == -1) {
		perror("test.txt");
		exit(1);
	}
	printf("%d\n", v);
}
