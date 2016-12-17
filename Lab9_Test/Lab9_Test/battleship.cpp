// Bonjour mes amis!
// Nathan Hahn
// Battleship, now with classes!!
// 11.9.2016

#include "battleship.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

Location::Location(){
	x = -1;
	y = '*';
}

void Location::pick(){
	x = rand() % fieldSize + 1;
	switch (rand() % fieldSize + 1){	
	case 0: y = 'a';
		break;
	case 1: y = 'b';
		break;
	case 2: y = 'c';
		break;
	case 3: y = 'd';
		break;
	case 4: y = 'e';
		break;
	}
}

void Location::fire(){
	cout << "Fire at will, Captain" << endl;
	cout << "Enter a number 1-5" << endl;
	cin >> x;
	cout << "Enter a letter a-e" << endl;
	cin >> y;
}

void Location::print() const{
	cout << y << x << endl;
}

bool compare(const Location& tmp1, const Location& tmp2){
	if (tmp1.x == tmp2.x && tmp1.y == tmp2.y)
		return true;
	else
		return false;
}

Ship::Ship() {
	sunk = false;
}

bool Ship::match(const Location& tmp) const{
	return compare(loc, tmp);
}

void Ship::sink() {
	sunk = true;
}

void Ship::setLocation(const Location& tmp) {
	loc = tmp;
}

void Ship::printShip() const {
	loc.print();
	if (sunk == true)
		cout << "The ship is at the bottom" << endl;
	else
		cout << "She's still afloat!" << endl;
}

void Fleet::deployFleet() {
	for (int i = 0; i < fleetSize; ++i) {
		Location tmp;
		tmp.pick();
		ships[i].setLocation(tmp);
	}
}

bool Fleet::operational() const{
	for (int i = 0; i < fleetSize; ++i) {
		if (ships[i].isSunk() == false)
			return true;
	}
	return false;
}

bool Fleet::isHitNSink(const Location & tmp){
	for (int i = 0; i < fleetSize; ++i) {
		if (ships[i].match(tmp) == true) {
			ships[i].sink();
			return true;
		}
	}
	return false;
}

void Fleet::printFleet() const {
	for (int i = 0; i < fleetSize; ++i) {
		ships[i].printShip();
	}
}