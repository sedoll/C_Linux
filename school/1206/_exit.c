#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void func1(void);
void func2(void);
main() {
	printf("atexit() Test...!\n");
	atexit(func1);
	atexit(func2);
	printf("bye!\n");
	_exit(0); //atexit 확인해서 있으면 출력
}
void func1(void) {
	printf("This is func1 called by main()\n");
}
void func2(void) {
	printf("This is func2 called by main()\n");
} 
