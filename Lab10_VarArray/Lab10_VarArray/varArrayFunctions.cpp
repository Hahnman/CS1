// Bonjour mes amis!!
// Nathan Hahn
// 11.16.2016

#include "varArray.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

void output(int *a, int size) {
	cout << "The elements are:" << endl;
	for (int i = 0; i < size; ++i) {
		cout << a[i] << endl;
	}
}

int check(int *a, int number, int size) {
	for (int i = 0; i < size; ++i) {
		if (a[i] == number)
			return i;
	}
	return -1;
}

void addNumber(int *& a, int number, int &size) {
	int nSize = size + 1;
	int verify = check(a, number, size);
	if (verify == -1) {
		int *b = new int[nSize];
		for (int i = 0; i < size; ++i)
			b[i] = a[i];
		b[size] = number;
		delete[] a;
		a = new int[nSize];
		a = b;
		size = nSize;
	}
}

void removeNumber(int *& a, int number, int &size) {
	int* c = new int[size - 1];
	int i = 0, j = 0;
	while (i < size && j < size - 1) {
		if (a[i] == number) {
			i++;
			continue;
		}
		c[j] = a[i];
		++j;
		++i;
	}
	delete a;
	a = c;
	size = j;
}
