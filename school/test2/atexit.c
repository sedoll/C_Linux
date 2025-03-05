#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void func1(void);
void func2(void);

int main() {
	printf("atexit() Test...!\n");
	atexit(func1);
	atexit(func2);
	printf("bye!\n");
	exit(0);
}
void func1(void) {
	printf("This is func1 called by main()\n");
}
void func2(void) {
	printf("This is func2 called by main()\n");
}
