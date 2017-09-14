/*
Name: Daniel Jappah
Date:3/17/17
File: replacespecial.c
Notes: Excercise 1-10
Write a program to copy its input to it's output replacing each tab by \t,
each backspace by \b, and each backslash by \\. This makes tabs and backspaces
visable in an unambiguous way
*/
#include <stdio.h>

int main(){
  char c;

  while((c = getchar()) != EOF)
  {
    if(c == '\t')
      putchar('\t');
    else if( c == '\b')
      putchar('\b');
    else if(c == '\\')
      putchar('\\');
    else
      putchar(c);
  }
  return 0;
}
