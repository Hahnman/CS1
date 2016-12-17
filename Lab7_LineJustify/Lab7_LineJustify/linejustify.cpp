// Bonjour mes amis!!
// Nathan Hahn
// inserts spaces to make a string 80 characters
// 10.26.2016

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl; using std::string;

const int lineLength = 80;
string addSpace(string);

int main() {
	cout << "Enter a string with at least 40 characters: " << endl;
	string input;
	getline(cin, input);

	if ((input.size()) < (lineLength / 2)) {
		cout << "The input string is less than 40 characters long." << endl;
		exit(0);
	}
	else {
		addSpace(input);
	}
}

string addSpace(string s) {
	int punct = s.find_first_of(".,!?;");
	int lastPunct = s.find_last_of(".,!?;");

	while ((punct != string::npos) && (s.size() < lineLength)) {
		if (punct != lastPunct) {
			s.insert(punct + 1, (" "));
			punct = s.find_first_of(".,!?;", punct + 3);
		}
	}

	while (s.size() < lineLength) {
		int random = rand() % s.size();
		s.insert((s.find(' ', random)), " ");
	}

	cout << s << endl;
	return s;
}
