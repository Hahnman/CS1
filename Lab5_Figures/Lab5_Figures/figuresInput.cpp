// Bonjour mes amis!!
// Nathan Hahn
// 10.3.2016
// Broke Lab3_Figures into 3 files

#include <iostream>
#include "figures.h"

using std::cin; using std::cout; using std::endl;

int rows;
int answer;

int main() {
	do {
		cout << "What shape do you desire? [0 to quit]" << endl;
		cout << "1. Square" << endl;
		cout << "2. Top Right Triangle" << endl;
		cout << "3. Bottom Left Triangle" << endl;
		
		cin >> answer;
		cout << "How many rows would you like it? [0 to quit]" << endl;
		cin >> rows;

		if (answer == 1)
			square(rows);
		else if (answer == 2)
			rtriangle(rows);
		else if (answer == 3)
			ltriangle(rows);
		else {
			cout << "That is not an option" << endl;
			cout << endl;
		}
	} 
	
	while (rows || answer != 0);
}