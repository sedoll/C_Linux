#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main() {
	int filedes1, filedes2;

	filedes1 = open("data1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	filedes2 = creat("data2.txt", 0644);
	
	printf("filedes1: %d\n", filedes1);
	printf("filedes2: %d\n", filedes2);

	close(filedes1);
	close(filedes2);
}
