/*
Name: Daniel Jappah
Date:3/17/17
File: intoout.c
Notes: Excercise 1-9
Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank
*/

#pragma warning(disable:4996)
#include <stdio.h>
#define MAXCHARLEGNTH 20

  int main()
  {
    char currentcharacter;
    // will store the current character from user input (stdin)
    char fixedinput [MAXCHARLEGNTH];
    //will hold the string of the edited user input
    int i, incorrectioncount;
    /*will hold the index of the character being placed into the string of edited user input (fixedinput)
    and total number of extra spaces in the user's input*/

    incorrectioncount = 0;//set number of extra spaces to zero
    printf("Program will  copy the user's input and replace strings of multiple blanks with strings of single blanks\n\n");

    for(i = 0; i < MAXCHARLEGNTH &&  (currentcharacter = getchar()) != EOF; i++)
    {
      if(currentcharacter != ' ' || i == 0)
      /*checks if the current character is a space or the first iteration of
      the for loop*/
      {
        fixedinput[i] = currentcharacter;
        /*character is added to the fixed string since it's either the first
        space character entered or not a space character at all
        */
      }
      else if(fixedinput[i-1] == ' ')
      /*checks if the previous character entered into the fixed user input
      (fixedinput) was a space since at this point by elemination the current
      character in this iteration must be a space
      */
      {
        getchar();
        //skips the current extra space character
        --i; //stops from moving on to the next index of the fixedinput array
        ++incorrectioncount;//incrament number incorrection
        printf("An extra space has been found and fixed\n");
        //alerts the user that there was an extra space and it has been handled
      }
      else
      {
        fixedinput[i] = currentcharacter;
        /*in the case it's just regular space character that doesn't have have a
        space character before it said space character is added to the
        fixedinput character array*/
      }
    }

    printf("\nTotal Extra Spaces: %i\nThe edited user input appears as: %s\n", incorrectioncount, fixedinput);
    return 0;
	}
