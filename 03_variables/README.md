# Variables
## cin
We practiced using *cout*, last time, and we were able to print out message.
This time, using *cin*, We can use the user's input and use that.

Here is *heizeInput.cpp*
```
#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	cout << "Shout out \"I love heize\" " << num << " times! YAY\n";
}
```
Using iostream, you can use both *cin* and *cout*. Also, by using the namespace std, we can use the shorter version of cout and cin.

Now, by using *cin*, we can create a simple calculater to show result of (+, -, *, %) of two inputs.

Here is *calculator.cpp*.
