#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
	int filedes, nread;
	off_t newpos;
	char buffer[10]; //해당 byte씩 파일 내용을 읽어옴
	
	filedes = open("temp1.txt", O_RDONLY);
	while((nread = read(filedes, buffer, 10)) > 0) {
		newpos = lseek(filedes, (off_t)0, SEEK_CUR);
		printf("file position : %ld\n Char String: %s\n", newpos, buffer);
	}	
	newpos = lseek(filedes, (off_t)0, SEEK_END);

	printf("file size : %ld\n", newpos);
}
