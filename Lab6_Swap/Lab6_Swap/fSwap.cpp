// Bonjour mes amis!
// Nathan Hahn
//Puts numbers in order, now with Call by reference!
// 10.10.2016

#include <iostream>
#include "swap.h"

using std::cin; using std::cout; using std::endl;

void fSwap(int& num1, int& num2){
	if (num1 > num2){
		int tmp;
		tmp = num1;
		num1 = num2;
		num2 = num1;
	}
}
