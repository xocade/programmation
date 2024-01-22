/* 
 * Write a program to copy its input to its output, replacing each
 * tab by \t, each backspace by \b, and each backslash by \\.
 */

#include <stdio.h>


int main() {

	int ch;
	char chTab[3] 		= "\\t",
	     chBspace[3]	= "\\b",
	     chBslash[3]	= "\\\\";

	while ((ch = getchar()) != EOF) {
		if (ch == '\t') {
			//putchar('\\');
			//putchar('t');
			printf("\\t");
		}
		if (ch == '\b')	{
			//putchar('\\');
			//putchar('b');
			printf("\\b");
		}
		if (ch == '\\') {
			putchar('\\');
			//putchar('\\');
		}
		putchar(ch);
	}

	return 0;
}
