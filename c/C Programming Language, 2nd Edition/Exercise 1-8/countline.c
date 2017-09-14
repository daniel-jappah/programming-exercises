/*
Name: Daniel Jappah
Date:3/17/17
File: hello.c
Notes: Excercise 1-8
Write a program to count blanks, tabs, and new lines
*/

#pragma warning(disable:4996)
#include <stdio.h>
#define BLANK ' '
#define NEWLINE '\n'
#define HORIZONTALTAB '\t'
#define VERTICALTAB '\v'

  int main()
  {
		int blankcount, newlinecount, horizontaltabcount, verticaltabcount;
		//initialization of the counter for each speical character
		int currentcharacter;
		//varible to hold the current incoming character
		blankcount = newlinecount =	horizontaltabcount = verticaltabcount = 0;
    //set all counters to zero
		printf("This program will count blanks, tabs, and new lines from user input. \n\n");
		while ((currentcharacter = getchar()) != EOF)
			{
				/*checks if each incoming character is a special one and then incraments the
				counter of said special character in the case it is
				*/
				if (currentcharacter == BLANK)
					++blankcount;
				else if (currentcharacter == NEWLINE)
					++newlinecount;
				else if (currentcharacter == HORIZONTALTAB)
					++horizontaltabcount;
				else if (currentcharacter == VERTICALTAB)
          ++verticaltabcount;
			}
		printf("Total Blanks: %d\nTotal New Lines: %d\nTotal Horizontal Tabs: %d\nTotal Vertical Tabs: %d", blankcount, newlinecount, horizontaltabcount, verticaltabcount);
    //displays(prints) a list all of the results
	}
