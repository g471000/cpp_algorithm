#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;

	cout << "Enter the best artist in the word(all lower case): \n";
	getline(cin, input, '\n');
	if(input == "heize"){
		cout << "You are very smart, wonderful and amazing person. HEIZE <3\n";
	} else {
		cout << ".........Bye.\n";
	}
}
