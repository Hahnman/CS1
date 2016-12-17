// Bonjour mes amis!!
// Nathan Hahn
// 11.16.2016

#include "varArray.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	char input;
	int number;
	int size = 0;
	int *a = new int[size];

	do {

		cout << "Enter Operation [a/r/q]" << endl;
		cin >> input;

		if (input == 'a') {
			cout << "Enter a number" << endl;
			cin >> number;
			addNumber(a, number, size);
			output(a, size);
		}
		else if (input == 'r') {
			cout << "Enter a number" << endl;
			cin >> number;
			removeNumber(a, number, size);
			output(a, size);
		}
	}

	while (input != 'q');
	}