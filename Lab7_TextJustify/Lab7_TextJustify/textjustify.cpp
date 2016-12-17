// Bonjour mes amis!
// Nathan Hahn
// takes an data from an input file and justifies it
// 10.26.2016

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl; using std::string; using std::ifstream; using std::ofstream;

const int lineLength = 80;
string addSpace(string s);

int main() {

	ifstream fin;
	ofstream fout;
	fin.open("unjustified.txt");
	fout.open("justified.txt");

	srand(time(nullptr));
	string input;

	while (getline(fin, input)) {

		if (input.size() > lineLength / 2) {
			input = addSpace(input);
		}

		fout << input << endl;
	}
	cout << "The input test has now been justified to 80 characters per line" << endl;

	fin.close();
	fout.close();
}

string addSpace(string s) {
	int punct = s.find_first_of(".,!?;");
	int lastPunct = s.find_last_of(".,!?;");

	while ((punct != string::npos) && (s.size() < lineLength)) {

		if (punct != lastPunct) {
			s.insert(punct + 1, (" "));
			punct = s.find_first_of(".,!?;", punct + 3);
		}

		else {
			break;
		}
	}

	while (s.size() < lineLength) {
		int random = rand() % s.size();
		s.insert((s.find(" ", random)), " ");
	}

	return s;
}