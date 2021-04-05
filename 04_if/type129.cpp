#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Enger a number: ";
	cin >> x;
	if (x == 129){
		cout << "머선129 v^-^v....!" << endl;
	} else if (x < 129){
		cout << "You entered a value less than 129.\n"; 
	} else {
		cout << "You entered a vlue greater than 129.\n";
	}
}
