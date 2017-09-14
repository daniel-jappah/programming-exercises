/*
Name: Daniel Jappah
Date:3/17/17
File: replacespecial.c
Notes: Excercise 1-12
Write a program that prints its input one word per line
*/

#include <stdio.h>

int main()
{
  char currentcharacter;
  
  while((currentcharacter = getchar()) != EOF)
  {
    if (currentcharacter  == ' ' || currentcharacter == '\n' || currentcharacter == '\t')
    {
      putchar('\n');
    }
    else
    {
      putchar(currentcharacter);
    }
  }
  return 0;
}
