#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello World!" << endl;
	cout << "Please type in you name?" << endl;
	char userInput[50];
	cin.getline(&userInput[0], 15);
	cout << "You typed: " << userInput << endl;

	return 0;
}