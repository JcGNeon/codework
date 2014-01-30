#include <iostream>

#define FREEZE_PT 32
#define SCALE_FACTOR_F (5.0/9.0)
#define SCALE_FACTOR_C (9.0/5.0)

using namespace std;

double Celsius(double fahrenheit)
{
	double result;
	result = SCALE_FACTOR_F * (fahrenheit - FREEZE_PT);
	cout<< result <<endl;
	return result;
	// convert from fahrenheit to celsius
}

double Fahrenheit(double celsius)
{
	double result;
	result = (SCALE_FACTOR_C * celsius) + FREEZE_PT;
	cout<< result <<endl;
	return result;
	// convert from celsius to fahrenheit
}

int main(int argc, char** argv)
{
	char choice;
	double fahrenheit;
	double celsius;

	cout<<"Do you want to convert to Fahrenheit or to Celsius? (F/C)\n";
	cin>> choice;

	switch(choice) {
		case 'C':
		case 'c':
			cout<<"Enter the temperature in Fahrenheit that you wish to convert to Celsius: ";
			cin>> fahrenheit;
			Celsius(fahrenheit);
			break;
		case 'F':
		case 'f':
			cout<<"Enter the temperature in Celsius that you wish to convert to Fahrenheit: ";
			cin>> celsius;
			Fahrenheit(celsius);
			break;
		default:
			cout<<"Invalid input. Please run the program and try again.\n";
			return 1;
			break;
	}
	return 0;
}
