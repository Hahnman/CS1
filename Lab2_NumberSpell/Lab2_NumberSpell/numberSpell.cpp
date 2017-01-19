// Bonjour mes amis!
// Nathan Hahn
// 1.18.2017
// prints out a number in English for input 1-99

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	int input, tens, ones;

	cout << "Enter a number [1-99]" << endl;
	cin >> input;

	tens = input / 10;
	ones = input % 10;

	if (tens == 1) {
		switch (ones) {
		case 0:
			cout << "ten" << endl;
			break;
		case 1:
			cout << "eleven" << endl;
			break;
		case 2:
			cout << "twelve" << endl;
			break;
		case 3:
			cout << "thirteen" << endl;
			break;
		case 4:
			cout << "fourteen" << endl;
			break;
		case 5:
			cout << "fifteen" << endl;
			break;
		case 6:
			cout << "sixteen" << endl;
			break;
		case 7:
			cout << "seventeen" << endl;
			break;
		case 8:
			cout << "eighteen" << endl;
			break;
		case 9:
			cout << "nineteen" << endl;
			break;
		}
	}
	else {
		switch (tens) {
		case 0:
			cout << "";
			break;
		case 2:
			cout << "twenty ";
			break;
		case 3:
			cout << "thirty ";
			break;
		case 4:
			cout << "fourty ";
			break;
		case 5:
			cout << "fifty ";
			break;
		case 6:
			cout << "sixty ";
			break;
		case 7:
			cout << "seventy ";
			break;
		case 8:
			cout << "eighty ";
			break;
		case 9:
			cout << "ninety ";
			break;
		}
		switch (ones) {
		case 0:
			break;
		case 1:
			cout << "one" << endl;
			break;
		case 2:
			cout << "two" << endl;
			break;
		case 3:
			cout << "three" << endl;
			break;
		case 4:
			cout << "four" << endl;
			break;
		case 5:
			cout << "five" << endl;
			break;
		case 6:
			cout << "six" << endl;
			break;
		case 7:
			cout << "seven" << endl;
			break;
		case 8:
			cout << "eight" << endl;
			break;
		case 9:
			cout << "nine" << endl;
			break;
		}
	}
}