#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define A_MEGABYTE (1024 * 1024)

int main() {
	char *some_memory;
	size_t size_to_allocate = A_MEGABYTE;
	int megs_obtained = 0;

	while (megs_obtained < 10000) {
		some_memory = (char * )malloc(size_to_allocate);
		if (some_memory != NULL) {
			megs_obtained = megs_obtained + size_to_allocate;
			sprintf(some_memory, "Hello World\n");
			printf("%s", some_memory);
		}
		else {
			printf("\n Memoey allocation failure\n");
			exit(1);
		}
	}
}
