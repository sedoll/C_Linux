#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

extern int errno;

int main() {
	FILE *fp;
	if ((fp = fopen("test.txt", "r")) == NULL) {
		printf("errno=%d\n", errno);
		exit(1);
	}
	fclose(fp);
}
