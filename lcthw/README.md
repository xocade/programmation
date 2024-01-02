# Learn C The Hard Way

Learn C The Hard Way notes and exercises

A sample of a C program.
```c
#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{

	int distance = 100;

	// this is also a comment
	printf("You are %d miles away.\n", distance);

	return 0;
}
```

Compiling the source above:
```bash
make 
cc -Wall -g source.c -o source
```

