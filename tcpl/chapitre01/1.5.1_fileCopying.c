/* 
 * Section 1.5.1 File Copying
 */

#include <stdio.h>

int main() {

	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}