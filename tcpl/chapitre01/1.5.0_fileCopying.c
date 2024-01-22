/* 
 * Section 1.5 Character input and Output
 */

#include <stdio.h>

// Copy input to output; 2nd version

int main() {

	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}