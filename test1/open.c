/* openex.c */
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
	int filedes;
	char pathname[] = "temp.txt";
	
	//filename으로 지정한 파일이 존재할 경우 읽기 전용으로 개방
	//만약 파일이 존재하지 않으면 새롭게 생성한 후 읽기 전용으로 개방
	// 초기 권한이 0644로 설정
	if((filedes = open(pathname, O_CREAT | O_RDWR, 0000)) == -1)
	{
		printf("file open error!\n");
		exit(1);
	}
	close(filedes);
}
