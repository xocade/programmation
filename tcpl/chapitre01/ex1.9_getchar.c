/*
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by
 * a single blank.
 */

#include <stdio.h>

int main() {
	int ch;
	int blank = 0;	
	while ((ch = getchar()) != EOF) {
		if (ch == ' ') {
			while (ch == ' ') putchar('\b');
			putchar('k');
		}
		else putchar(ch);
	}

	return 0;
}
