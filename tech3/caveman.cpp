#include <iostream>
using namespace std;

int main()
{
	const int MAX_CHARS = 100;
	char partOne[MAX_CHARS], partTwo[MAX_CHARS];
	char stringCat[MAX_CHARS];

	cout
		<< "====================" << endl
		<< "STRING CONCATENATOR" << endl
		<< "====================" << endl
		<< endl
		<< endl
		<< "Enter a phrase here: "; cin.getline(partOne, MAX_CHARS);
	cout
		<< "Now continue your phrase: "; cin.getline(partTwo, MAX_CHARS);
	cout
		<< "Forming your sentence... Please wait." << endl
		<< endl
		<< endl;
	system("pause");
	strcat_s(partOne, partTwo);
	cout
		<< "This is the sentence you formed: " << endl
		<< "(your first phrase has been modified)" << endl
		<< endl
		<< partOne;
	return 0;
}


