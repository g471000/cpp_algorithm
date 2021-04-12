#include <iostream>

using namespace std;

int main() {
		int x;			// A normal integer
		int *p_int;		// A pointer to an integer

		p_int = &x;		// Read it, "assign the address of x to p_int"

		cout << "Please enter a number: ";
		cin >> x;		// insert the input value to integer x

		cout << "x: " << x << ", *p_int: " << *p_int << endl;
		*p_int = 10;
		
		cout << "Run the code -> *p_int = 10\n";
		cout << "x: " << x << ", *p_int: " << *p_int << endl;
}

