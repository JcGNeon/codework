#include <iostream>
#include <string>

using namespace std;

struct fruit {
	float murder;
	float assault;
	float rape;
	float robbery;
	float larceny;
	float burglary;
	int car_theft;
};

int main(int argc, char *argv[])
{
	string input;
	struct fruit percentage;
	struct fruit *ptr;
	
	percentage.murder = 62.6;
	percentage.assault = 55.6;
	percentage.rape = 41.8;
	percentage.robbery = 26.2;
	percentage.larceny = 18.3;
	percentage.burglary = 12.9;
	percentage.car_theft = 13;
	ptr = &percentage;
	
	cout<<"Clearance rates (in %) from the USA in 2004.\nSelect the following to see their respective rates:\nMurder, assault, rape, robbery, larceny, burglary, car theft\n"<<endl;
	getline(cin, input);
	
	if((input == "Murder") || (input == "murder")) {
		cout<< "Murder: " << ptr->murder <<endl;
		cin.get();
	}
	else if((input == "Assault") || (input == "assault")) {
		cout<< "Assault: " << ptr->assault <<endl;
		cin.get();
	}
	else if((input == "Rape") || (input == "rape")) {
		cout<< "Rape: " << ptr->rape <<endl;
		cin.get();
	}
	else if((input == "Robbery") || (input == "robbery")) {
		cout<< "Robbery: " << ptr->robbery <<endl;
		cin.get();
	}
	else if((input == "Larceny") || (input == "larceny")) {
		cout<< "Larceny: " << ptr->larceny <<endl;
		cin.get();
	}
	else if((input == "Burglary") || (input == "burglary")) {
		cout<< "Burglary: " << ptr->burglary <<endl;
		cin.get();
	}
	else if((input == "Car theft") || (input == "car theft") || (input == "Car_theft") || (input == "car_theft") || (input == "Cartheft") || (input == "cartheft")) {
		cout<< "Car theft: " << ptr->car_theft <<endl;
		cin.get();
	}
	else {
		cout<<"Error, invalid input. Run the program and try again.\n"<<endl;
		cin.get();
		return 1;
	}
	
	return 0;
}
