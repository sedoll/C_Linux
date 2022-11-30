#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define A_MEGABYTE (1024 * 1024)

int main() {
	char *some_memory;
	int megabyte = A_MEGABYTE;
	some_memory = (char * )malloc(megabyte);
	if (some_memory != NULL) {
		sprintf(some_memory, "Hello World\n");
		printf("%s", some_memory);
	}
}
