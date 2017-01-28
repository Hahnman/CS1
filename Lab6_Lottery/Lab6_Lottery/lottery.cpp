// Bonjour mes amis!
// Nathan Hahn
// basic lottery game using arrays
// 10.10.2016

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl;

const int arraySize = 10;
int wins[arraySize];
int ent;
int n;

void assign(int wins[]);
void draw(int wins[]);
void entry();
bool check(int ent, int wins[]);
void printOut();
void again();

int main(){
	assign(wins);
	draw(wins);
	entry();
	check(ent, wins);
	printOut();
	again();
}

void assign(int wins[]){
	for (int i = 0; i < arraySize; ++i)
		wins[i] = -1;
	// All elements are assigned a value of -1
}

void draw(int wins[]){
	int numSoFar = 0, tmp;
	srand(time(nullptr));

	while (numSoFar < arraySize) {
		tmp = rand() % 100;

		if (check(ent, wins) == false) {
			wins[numSoFar] = tmp;
			++numSoFar;
		}
	}
}

void entry(){
	cout << "Pick a number [0-99] for the lottery!" << endl;
	cin >> ent;
	// The user's lottery guess is stored in the variable entry
}

bool check(int ent, int wins[]) {
	for (int i = 0; i < arraySize; ++i) {
		if (ent == wins[i])
			return true;
	}
	return false;
}

void printOut(){
	cout << "The winning numbers were ";
	for (int i = 0; i < arraySize; ++i) {
		cout << wins[i] << " ";
	}
	
	cout << " " << endl;

	for (int i = 0; i < arraySize; ++i)
		if (wins[i] == ent)
			cout << "You win!" << endl;
		else
			cout << "You lose, try again" << endl;
	//int entry and int wins[] are printed out for the user
}

void again() {
	cout << "Would you like to try again? [y/n]" << endl;
	char ans;
	cin >> ans;

	if (ans == 'y' || ans == 'Y')
		main();
}
