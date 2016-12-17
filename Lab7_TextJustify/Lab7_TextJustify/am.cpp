// Adjusts the input text file so that each line has 80 characters in the output.
// CS 13012 Lab 7 Part 2
// Andrew Mis
// 3/11/16

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <ctime>

using std::cout; using std::cin; using std::endl; 
using std::ifstream; using std::ofstream;
using std::string;

string addSpace(string s);

int main() {

	// Initializes streams and opens the files
	ifstream fin;
	ofstream fout;
	fin.open("unjustified.txt");
	fout.open("justified.txt");

	srand(time(nullptr)); 
	string sInput;

	while (getline(fin, sInput)) {

		// Checks string length and calls function
		if (sInput.size() > 40) {
			sInput = addSpace(sInput);
		}

		fout << sInput << endl;
	}
	cout << "The input text file has now been balanced to 80 characters per line." << endl;

	// Closes the files
	fin.close(); 
	fout.close();
}

string addSpace(string s) {
	const int reqSize = 80;
	int punct = s.find_first_of(".,!?;");
	int lastPunct = s.find_last_of(".,!?;");

	// Adds spaces after punctuation
	while ((punct != string::npos) && (s.size() < 80)) {

		if (punct != lastPunct) {
			s.insert(punct + 1, (" "));
			punct = s.find_first_of(".,!?;", punct + 3);
		}

		else {
			break;
		}
	}

	// Adds spaces randomly between words
	while (s.size() < reqSize) {
		int random = rand() % s.size();
		s.insert((s.find(" ", random)), " ");
	}

	return s;
}