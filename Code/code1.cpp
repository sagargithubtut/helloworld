#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello World!" << endl;
	cout << "Please type in your name?" << endl;
	char userInput[50];
	cin.getline(&userInput[0], 15);
	cout << "You typed: " << userInput << endl;

	return 0;
}

bool do_string_contain_number(const string& strInput)
{
	bool retValue = false;
	if (strInput.empty())
	{
		retValue = false; // empty string
	}
	else
	{
		// not implemented yet
	}
	return retValue;
}