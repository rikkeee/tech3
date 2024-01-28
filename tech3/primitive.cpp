#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int MAX_CHARS = 100;
	char oneString[MAX_CHARS], secString[MAX_CHARS];
	char copString[MAX_CHARS];

	cout
		<< "=================" << endl
		<< "STRING COPIER" << endl
		<< "=================" << endl
		<< endl
		<< endl
		<< "Enter any kind of message here: "; cin.getline(oneString, MAX_CHARS);
	cout
		<< "Enter a second message: "; cin.getline(secString, MAX_CHARS);

	strcpy_s(copString, secString);

	cout
		<< endl
		<< "Final Message: " << copString;

	return 0;
}
