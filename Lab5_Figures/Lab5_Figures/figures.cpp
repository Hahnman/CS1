// Bonjour mes amis!!
// Nathan Hahn
// 10.3.2016
// Broke Lab3_Figures into 3 files

#include <iostream>
#include "figures.h"

using std::cin; using std::cout; using std::endl;

void rtriangle(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}

void ltriangle(int rows) {
	for (int i = rows; i > 0; --i) {
		for (int j = 1; j <= i; ++j)
			cout << "*";
		cout << endl;
	}
	cout << endl;
}

void square(int rows) {
	cout << "filled or hollow [f/h]" << endl;
	char foh;
	cin >> foh;

	if (foh == 'f') {
		for (int i = 1; i <= rows; ++i) {
			for (int j = 1; j <= rows; ++j)
				cout << "*";
			cout << endl;
		}
		cout << endl;
	}

	else if (foh == 'h') {
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
		cout << endl;
	}

}
