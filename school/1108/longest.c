#include <stdio.h>
#include <string.h>
#define MAXLINE 100

void copy(char from[], char to[]);

char line[MAXLINE]; //입력줄
char longest[MAXLINE]; //가장 긴 줄

int main() {
	int len;
	int max = 0;

	while (fgets(line) != NULL) {
		len = strlen(line);
		if (len > max) {
			max = len;
			copy(line, longest);
		}
	}
	if(max > 0)
		printf("%s", longest);
	return 0;
}

void copy(char from[], char to[]) {
	int i = 0;

	while((to[i] = from[i]) != '\0')
		++i;
}

