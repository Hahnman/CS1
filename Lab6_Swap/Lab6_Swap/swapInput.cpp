// Bonjour mes amis!
// Nathan Hahn
//Puts numbers in order, now with Call by reference!
// 10.10.2016

#include <iostream>

using std::cin; using std::cout; using std::endl;

void fSwap(int&, int&);
void sSwap(int&, int&);

int tmp;

int main(){
	cout << "Enter 3 random numbers" << endl;
	int x, y, z;
	cin >> x >> y >> z;

	fSwap(x, y);
	sSwap(y, z);
	fSwap(x, y);

	cout << "The numbers in order are " << x << " " << y << " " << z << endl;
}

void fSwap(int& x, int& y){
	if (x > y){
		tmp = x;
		x = y;
		y = tmp;
	}
}

void sSwap(int& y, int& z){
	if (y > z){
		tmp = y;
		y = z;
		z = tmp;
	}
}
