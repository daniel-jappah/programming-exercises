/*
Name: Daniel Jappah
Date:3/17/17
File: lengthhistogram.c
Notes: Excercise 1-13
Write a program that prints a histogram of the length of words in it's input
it more easy to draw the histogram with the bars horizontal; a vertical
orientation is more more challenge
*/

#include <stdio.h>
#define MAXWORDLENGTH 10


int main(){
  char currentcharacter;
  int wordlengths [MAXWORDLENGTH] = {0};
  int currentwordlength;
  int i,j;

  currentwordlength = 0;

  while((currentcharacter = getchar()) != EOF)
  {
    if(currentcharacter  == ' ' || currentcharacter == '\n' || currentcharacter == '\t')
    {
      if (currentwordlength != 0 && currentwordlength < MAXWORDLENGTH)
      {
        wordlengths[currentwordlength-1] += 1;
        //printf("Added a new word to length list at the %i index\n", currentwordlength-1);
      }
      currentwordlength = 0;//reset word length for the next word
    }

    else
    {
      currentwordlength++;
    }
  }

  wordlengths[currentwordlength-1] += 1;
  //printf("Added a new word to length list at the %i index\n", currentwordlength-1);
  //printf("Wordlengths: %i", wordlengths[4]);

  //seperate into own method
  for(i = 0; i < MAXWORDLENGTH; i++)
  //iterates through each wordlength
  {
    printf("\n%i:", i+1);
    for(j = 0; j< wordlengths[i]; j++)
    //iteratest through the amount of each word at a given length
    {
      printf("*");
    }
  }

  printf("\n\n");
  //seperate into own method
  for(i = MAXWORDLENGTH-1; i >= 0; i--)
  //iterates through each wordlength
  {
    printf("\n%2d:", i+1);
    //traverses column
    for(j = 0; j< MAXWORDLENGTH; j++)
    //iteratest through the amount of each word at a given length
    //traverses row
    {
      if(wordlengths[j] > i)
      {
      printf(" *");
      }
      else
      {
        printf("  ");
      }
    }
  }
  printf("\n    1 2 3 4 5 6 7 8 9 10");

  return 0;
}
