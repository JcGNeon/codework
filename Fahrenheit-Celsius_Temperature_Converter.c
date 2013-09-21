#include <stdio.h>

#define FREEZE_PT 32.00f
#define CONVERSION_F (5.00/9.00f)
#define CONVERSION_C (9.00/5.00f)

void Celsius(float fahrenheit)
{
	printf("%f.\n", CONVERSION_C * (fahrenheit - FREEZE_PT));
}

void Fahrenheit(float celsius)
{
	printf("%f.\n", (CONVERSION_F * celsius) + FREEZE_PT);
}

int main(int argc, char *argv[])
{
	char choice;
	float fahrenheit;
	float celsius;
	
	printf("Do you want to convert to Fahrenheit or to Celsius? (F/C)\n");
	scanf("%c", &choice);
	
	if(choice == 'C') {
		printf("Enter the temperature in Fahrenheit that you wish to convert to Celsius: ");
		scanf("%f", &fahrenheit);
		Celsius(fahrenheit);
	}
	else if(choice == 'F') {
		printf("Enter the temperature in Celsius that you wish to convert to Fahrenheit: ");
		scanf("%f", &celsius);
		Fahrenheit(celsius);
	}
	else {
		printf("Invalid input. Please run the program and try again.\n");
		return 1;
	}
	return 0;
}
