#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>

int main() {
	int fdin, fdout;
	size_t nread;
	char buffer[1024];

	fdin = open("temp1.txt", O_RDONLY);
	//fdout = open("temp2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	fdout = creat("temp2.txt", 0644);
	if(fdin>=3) {
		printf("%d", fdin);
		while((nread = read(fdin, buffer, 1024)) > 0) {
			if(write(fdout, buffer, nread)<nread) {
				close(fdin);
				close(fdout);
			}
		}
	}
	close(fdin);
	close(fdout);
}
