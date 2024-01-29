#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int MAX_ASCII = 256;
	int i = 0;
	char upperString[MAX_ASCII];

	cout
		<< "=====================" << endl
		<< "CAPITALIZATION FIXER" << endl
		<< "=====================" << endl
		<< endl
		<< endl
		<< "Enter any kind of string: "; cin.getline(upperString, 100);

	cout
		<< "Original string: " << upperString << endl
		<< "Processing. . ." << endl;
	system("pause");

	for (i = 0; i < strlen(upperString); i++) {
		if (i == 0 || upperString[i - 1] == ' ') {
			upperString[i] = toupper(upperString[i]);
		}
		else {
			upperString[i] = tolower(upperString[i]);
		}

	}
	cout
		<< endl
		<< "Formatted String: " << upperString;


	return 0;
}
