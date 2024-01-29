#include <iostream>
#include <cctype>
#include <cString>
using namespace std;


int main()
{
	char firstInput[100], secondInput[100];

	cout
		<< "+++++++++++++++++++" << endl
		<< "STRING COMPARE" << endl
		<< "+++++++++++++++++++" << endl
		<< endl;

	cout
		<< "Enter your first string: "; 
	cin >> firstInput;
	cout
		<< "Enter your second string: ";
	cin >> secondInput;

	if (strcmp(firstInput, secondInput) == 0) {
		cout << "Equal";
	}
	else if (strcmp(firstInput, secondInput) > 0) {
		cout << "Positive";
	}
	else if (strcmp(firstInput, secondInput) < 0) {
		cout << "Negative";
	}

	return 0;
}

