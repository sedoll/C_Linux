/* createx.c */
#include <fcntl.h>
#include <stdlib.h>
int main(){
	int filedes1, filedes2;
	// 현재 여기에 쓰인 open과 creat는 동일한 기능이다.
	filedes1 = open("data1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	filedes2 = creat("data2.txt", 0644);
	close(filedes1);
	close(filedes2);
}
