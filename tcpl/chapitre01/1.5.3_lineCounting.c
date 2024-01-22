/* 
 * Section 1.5.3: Line Counting
 */

#include <stdio.h>

int main() {

	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
