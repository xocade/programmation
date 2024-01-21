/*
 * Write a program to count blanks, tabs, and newlines.
*/


#include <stdio.h>

int main(void) {
	int ch;	
	int blanks = 0,
	    tabs = 0,
	    newlines = 0;
	printf("Needs to press ^D to stop.\n\n");
	while ((ch = getchar()) != EOF) {
		if (ch == ' ')
			++blanks;
		if (ch == '\t') 
			++tabs;
		if (ch == '\n')
			++newlines;
	}
	printf("\n\n");
	printf("Spaces:\t\t%i\n", blanks);
	printf("Tabs:\t\t%i\n", tabs);
	printf("Newlines:\t%i\n", newlines);

return 0;
}
