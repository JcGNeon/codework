#include <stdio.h>

#define FREEZE_PT 32.0f
#define SCALE_FACTOR_F (5.0/9.0f)
#define SCALE_FACTOR_C (9.0/5.0f)

void Celsius(float fahrenheit)
{
	printf("%f.\n", SCALE_FACTOR_F * (fahrenheit - FREEZE_PT)); // convert from fahrenheit to celsius
}

void Fahrenheit(float celsius)
{
	printf("%f.\n", (SCALE_FACTOR_C * celsius) + FREEZE_PT); // convert from celsius to fahrenheit
}

int main(int argc, char *argv[])
{
	char choice;
	float fahrenheit;
	float celsius;

	printf("Do you want to convert to Fahrenheit or to Celsius? (F/C)\n");
	scanf("%c", &choice);

	if((choice == 'C') || (choice == 'c')) {
		printf("Enter the temperature in Fahrenheit that you wish to convert to Celsius: ");
		scanf("%f", &fahrenheit);
		Celsius(fahrenheit);
	}
	else if((choice == 'F') || (choice == 'f')) {
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
