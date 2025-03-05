#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>

int main() {
	int fdin, fdout;
	size_t nread;
	char buffer[1024];
	
	fdin = open("data1.txt", O_RDONLY);
	fdout = open("temp.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if(fdin>=3) {
		while((nread = read(fdin, buffer, 1024)) > 0) {
			if(write(fdout, buffer, nread) < nread) {
				break;
			}
		}
	}
	close(fdin);
	close(fdout);
}
