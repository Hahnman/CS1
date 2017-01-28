// Bonjour mes amis!!
// Nathan Hahn
// 10.03.2016
// Calculates Basal Metabolic Rate with user-defined functions

#include <iostream>

using std::cin; using std::cout; using std::endl;

void bmrMale(int, int, int);
void bmrFemale(int, int, int);
void bagNum(double);

const int bagCal = 245;
double bmr;

int main(){
	cout << "Basal Metabolic Rate" << endl;
	cout << "Are you a Male or Female? [m/f]" << endl;
	char g;
	cin >> g;

	cout << "How much do you weigh? (in pounds)" << endl;
	int w;
	cin >> w;

	cout << "How many feet tall are you?" << endl;
	int feet, inch, h;
	cin >> feet;
	cout << "How many additional inches tall are you?" << endl;
	cin >> inch;
	h = (feet * 12) + inch;

	cout << "How old are you?" << endl;
	int a;
	cin >> a;

	if (g == 'm' || g == 'M') 
		bmrMale(w, h, a);

	else if (g == 'f' || g == 'F')
		bmrFemale(w,h,a);
	
	bagNum(bmr);
}

void bmrMale(int w, int h, int a){
	bmr = 66 + (6.3 * w) + (12.9 * h) - (6.8 * a);
	cout << "Your Basal Metabolic Rate is " << bmr << endl;
	
}
void bmrFemale(int w, int h, int a) {
	bmr = 655 + (4.3 * w) + (4.7 * h) - (4.7 * a);
	cout << "Your Basal Metabolic Rate is " << bmr << endl;
}

void bagNum(double bmr) {
	int bagTot = bmr / bagCal;
	cout << "The number of bagels you can eat is " << bagTot << endl;
}