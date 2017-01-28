// Bonjour mes amis!
// Nathan Hahn
//Puts numbers in order, now with Call by reference!
// 10.10.2016

#include <iostream>
#include "swap.h"

using std::cin; using std::cout; using std::endl;

void fSwap(int& num2, int& num3){
	if (num2 > num3){
		int tmp;
		tmp = num2;
		num2 = num3;
		num3 = num2;
	}
}
