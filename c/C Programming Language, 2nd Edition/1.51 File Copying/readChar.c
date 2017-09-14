/*
Name: Daniel Jappah
Date:3/17/17
File: hello.c
Notes: 1.5.1
	reads a character
*/

#include <stdio.h>

main() {
	//Variable to store character
	//char isn't large enough to hold EOF so the data type int is used
	int c;
	//ends program when end of file is return from standard input
	while (c != EOF) {
		//gets character from standard input
		c = getchar();
		//prints character to standard output
		putchar(c);
	}
	return 0;
}
