// Bonjour mes Amis!!
// Prints out 4 shapes
// Nathan Hahn
// 09.19.2016

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Enter the number of rows and columns you want:" << endl;
	int rows;
	cin >> rows;

	for (int i = 1; i <= rows; ++i){
		for (int j = 1; j <= rows; ++j) 
			cout << "*";
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << endl;
	}

	cout << endl;

	for (int i = rows; i > 0; --i) {
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <= rows; ++j)
			if (i == 1)
				cout << "*";
			else if (i == rows)
				cout << "*";
			else if (j == 1)
				cout << "*";
			else if (j == rows)
				cout << "*";
			else cout << " ";
		cout << endl;
	}
}