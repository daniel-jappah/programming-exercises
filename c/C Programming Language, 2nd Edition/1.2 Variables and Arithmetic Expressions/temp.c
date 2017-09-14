/*
Name: Daniel Jappah
Date:3/17/17
File: hello.c
Notes: Excercise 1-3
Modify the temprature conversion program to print a heading above the table
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
	fahr = lower;
  //Table Header print
	printf("%s\n %s %s\n", "Temprature Conversion Program","Fahrenheit", "Celsius");
	while (fahr <= upper) {
		//conversion of fahrenheit tempratures to celsius
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		/*formatting and print of table
		*space modified to center data*/
		printf("%6.0f%c %9.1f%c\n", fahr, 'F', celsius, 'C');
		fahr = fahr + step;
	}
}
