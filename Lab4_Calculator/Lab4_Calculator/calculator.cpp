// Bonjour mes amis!!
// Nathan Hahn
// 09.26.2016
// basic calculator

#include <iostream>
#include <cmath> 
#include <cstdlib>

using std::cin; using std::cout; using std::endl;

int main(){
	int choice;
	do{
		cout << "Select a Function:" << endl;
		cout << "1. Absolute Value" << endl;
		cout << "2. Square Root" << endl;
		cout << "3. Ceiling" << endl;
		cout << "4. Power" << endl;

		cin >> choice;
		if (choice > 0 && choice < 5) {
			if (choice == 1) {
				cout << "Enter an integer, negative or positive" << endl;
				int value1;
				cin >> value1;

				value1 = abs(value1);
				cout << "The absolute value is " << value1 << endl;
			}

			else if (choice == 2) {
				cout << "Enter a value" << endl;
				double value2;
				cin >> value2;

				value2 = sqrt(value2);
				cout << "The square root is  " << value2 << endl;
			}

			else if (choice == 3) {
				cout << "Enter a decimal value for rounding up" << endl;
				double value3;
				cin >> value3;

				value3 = ceil(value3);
				cout << "The rounded number is " << value3 << endl;
			}

			else if (choice == 4) {
				cout << "Enter 2 integers for exponent multiplication" << endl;
				cout << "Enter base then power" << endl;
				int base, power;
				cin >> base >> power;

				int value4 = pow(base, power);
				cout << "The result is " << value4 << endl;
			}
		}
	} while (choice >= 1 && choice <= 4);
		
	cout << "That is not an option" << endl;
}
