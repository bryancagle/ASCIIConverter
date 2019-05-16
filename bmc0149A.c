/*************************
Bryan Cagle
CSCE 3600 - Section 002
1-23-2016

The purpose of this program is to take an ASCII character
from user input and convert it to its decimal, hexadecimal, and binary values.
*************************/

#include <stdio.h>

int main()
{
	char input; //initial input read from scanf
	int deci,i; //integer to be used for holding the converted decimal value; iterative integer
	int binInt[8]; //integer array used to store individual bit values to find the binary conversion

	//Asks user for character input, converts and prints out and integer and  hex values using printf
	printf("\nEnter an ASCII character: ");
	scanf("%c", &input);
	deci = input;
	printf("\nThe ASCII value of %c is: %d (decimal) -- %x (hexidecimal) -- ",input,deci,deci);

	//Loop function that uses the basic binary conversion calculation algorithm to store the previous
	//converted decimal value into the 1-D integer array from end to start as necessary
	for(i = 7; i >= 0; i--){
		if(deci % 2 == 1) //checks the remainder and assigns the created binary array that "bit" value
		binInt[i]=1;
		else
		binInt[i]=0;
		deci /= 2;
	}

	//prints out the final created binary array in the correct order
	for(i = 0; i < 8; i++)
	printf("%d",binInt[i]);

	//prints out remaining info and ends program
	printf(" (binary)\n\n");
	return 0;
}
