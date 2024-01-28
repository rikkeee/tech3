#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char stringTest[100];
	int i, strLength;
	int flag = 0;
	

	cout
		<< "==================" << endl
		<< "Palindrome Checker" << endl
		<< "==================" << endl
		<< endl;
	cout
		<< "Enter any string: "; cin.getline(stringTest, 100);
	cout
		<< "Processing..." << endl;
	system("pause");

	strLength = strlen(stringTest);
	for (i = 0; i < strLength; i++) {
		if (stringTest[i] != stringTest[strLength - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << stringTest << " is not a palindrome." << endl;
	}
	else {
		cout << stringTest << " is a palindrome." << endl;
	}

	return 0;
}



