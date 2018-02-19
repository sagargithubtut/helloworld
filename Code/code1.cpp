#include <iostream>

using namespace std;

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

void show_menu_options()
{
	string strMenu = "Welcome to try this code!\n";
	strMenu.append("1 will close the application\n");
	cout << strMenu.c_str() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Hello World!" << endl;
	cout << "Please type in you name?" << endl;
	char userInput[50];
	cin.getline(&userInput[0], 15);
	cout << "You typed: " << userInput << endl;
	show_menu_options();

	return 0;
}