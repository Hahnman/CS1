// Bonjour mes amis
// Nathan Hahn
// 09.26.2016
// Random Number Generator Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl;

int main(){
	srand(time(nullptr));
	char answer;

	do{
		cout << "I selected a number between 0-99, What is it?" << endl;
		int guess;
		cin >> guess;

		int actualValue = rand() % 100;

		if (guess < actualValue)
			cout << "Wrong, it is larger, what is it?" << endl;
		else if (guess > actualValue)
			cout << "Wrong, it is smaller, what is it?" << endl;
		else if (guess == actualValue)
			cout << "Correct!" << endl;
		else cout << "Try again later" << endl; // If somehow none of the 3 above choices aren't satisfied
	
		cout << actualValue << endl;
		cout << "Want to play again? [y/n]" << endl;
		cin >> answer;

	}

	while (answer == 'y');
}