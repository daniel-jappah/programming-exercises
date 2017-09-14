/*
Name: Daniel Jappah
Date:3/17/17
File: hello.c
Notes: Excercise 1-4
Write a program to print the corresponding Celsius to Fahrenheit table.
*/

# include <stdio.h>

main() {
	// initialization variables for each temprature system
	float fahr, celsius;
	//initialization oftable incrementation variables
	float lower, upper, step;
  lower = 0;
	upper = 300;
	step = 20;
  celsius = lower;

	//print table title
	printf("Celsius to Fahrenheit Conversion:\n");
	//print table header
	printf("%s\n", "Celsius Farenheit");

	//formats & prints table data for celsius to fahrenheit
	while (celsius <= upper) {
		//conversion of fahrenheit tempratures to celsius
		fahr = celsius * 1.8 + 32.0;
		/*formatting and print of table
		*space modified to center data*/
		printf("%4.0f%c %8.0f%c\n", celsius, 'C', fahr, 'F');
		celsius = celsius + step;
	}

}
