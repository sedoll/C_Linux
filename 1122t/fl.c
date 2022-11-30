// file locking code
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

const char *lock_file = "/tmp/LCK.text2";

int main() {
	int file_desc, delay = 3;
	int tries = 50;

	while (tries--) {
		file_desc = open(lock_file, O_RDWR | O_CREAT | O_EXCL, 0444);
		if(file_desc == -1) {
			printf("%d - Lock already present, Try Again~\n", getpid());
			sleep(1);
		}
		else {
			printf("%d - I have exclusive access\n", getpid());
			sleep(delay);
			(void)close(file_desc);
			(void)unlink(lock_file);
			sleep(1);
		}
	}
	printf("Done . . .\n");
}
