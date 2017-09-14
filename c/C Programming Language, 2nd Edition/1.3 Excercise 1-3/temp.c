/*
Name: Daniel Jappah
Date:3/17/17
File: hello.c
Notes: 1.1 Getting Started
	Print the words:
	"hello, world"
*/
# include <stdio>

main(){
  // initialization variables for each temprature system
	float fahr, celsius;
	//initialization oftable incrementation variables
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;

	// prints prrogram title
	printf("%s\n\n\n", "Temprature Conversion Program");

	//print table title
	printf("%s\n", "Fahrenheit to Celsius Conversion");
	//print table variables
	printf("%s\n", "Fahrenheit Celsius");

	//formats & prints table data fahrenheit-celsius
	while (fahr <= upper) {
		//conversion of fahrenheit tempratures to celsius
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		/*formatting and print of table
		*space modified to center data*/
		printf("%6.0f%c %9.1f%c\n", fahr, 'F', celsius, 'C');
		fahr = fahr + step;
	}
}
