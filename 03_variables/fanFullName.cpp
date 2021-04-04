#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fan_name;

	cout << "Please enter your fan name: ";
	getline(cin, fan_name, '\n');
	cout << "Hi " << fan_name << "! Heize's #1 fan!\n";
}
