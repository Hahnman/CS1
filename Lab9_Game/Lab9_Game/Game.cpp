// Bonjour mes amis!!
// Nathan Hahn
// Battleship! now with classes!!
// 11.9.2016

#include "battleship.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	Fleet battleGroup;
	srand(time(nullptr));
	battleGroup.deployFleet();

	cout << "Enemy fleet on the horizon!" << endl;
	cout << "Battlestations!!" << endl;
	cout << "Fire at will, Captain" << endl;
	cout << endl;

	while (battleGroup.operational()) {
		Location shot;
		shot.fire();
		if (battleGroup.isHitNSink(shot)) 
			cout << "Battleship hit!" << endl;
		else
			cout << "Shot missed" << endl;
	}

	cout << endl;
	cout << "Congratulations Captain, enemy fleet sunk" << endl;
}