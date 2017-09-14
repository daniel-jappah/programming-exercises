/*
Name: Daniel Jappah
Date:3/17/17
File: lengthhistogram.c
Notes: Excercise 1-15
Rewrite the temprature conversion program of Section1.2 to use a function for
conversion
*/
#include <stdio.h>

float fahrtocel(float celtemp);
float celtofahr(float fahrtemp);

int main()
{
	int i;

	printf("Celsius to Fahrenheit Conversion:\n");
	for (i = 0; i < 300; i += 20)
		printf("%4.0f%c %8.0f%c\n", (float)i, 'C', celtofahr(i), 'F');

	printf("\nFahrenheit to Celsius Conversion:\n");
	for (i = 0; i < 300; i += 20)
		printf("%4.0f%c %8.0f%c\n", (float)i, 'F', fahrtocel(i), 'C');
}

float celtofahr(float celtemp )
{
	return celtemp * 1.8 + 32;
}

float fahrtocel(float fahrtemp)
{
	return (5.0 / 9.0) * (fahrtemp - 32.0);
}
