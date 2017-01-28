//Bonjour mes amis!
// Nathan Hahn
// 09.19.2016
//Adds input numbers

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main(){

	cout << "Input number [0 to quit]: ";
	int n;
	cin >> n;

	int sum = n;

	while (n != 0) {
		cin >> n;
		if (n > 0)
			sum = sum + n;
		else
			cout << "The Sum is: " << sum << endl;
	}
}