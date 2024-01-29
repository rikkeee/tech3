#include <iostream>
using namespace std;

int main() {
	const int MAX_CHARS = 100;
	char strEnter[MAX_CHARS];
	int strHaba, indOne;

	cout 
		<< "==================" << endl
		<< "STRING REVERSER" << endl
		<< "==================" << endl
		<< endl
		<< endl
		<< "Enter a string: "; cin.getline(strEnter, MAX_CHARS);

	cout << "Reversed String: " << endl;
	strHaba = strlen(strEnter);

	for (int i = strHaba - 1; i >= 0; --i) {
		if (strEnter[i] == ' ' || i == 0) {
			indOne = (i == 0) ? 0 : i + 1;
			for (int j = indOne; j < strHaba && strEnter[j] != ' '; ++j) {
				cout << strEnter[j];
			}
			cout << endl;
		}
	}

	return 0;
}