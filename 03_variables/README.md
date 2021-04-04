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

You can compile this program like below:
```
g++ heizeInput.cpp -o heizeInput
```

Whe you run the program, you will see the result like below, and you will see different sentences depends on the input:
```
> ./heizeInput
Please enter a number: 10
Shout out "I love heize" 10 times! YAY
```

Now, by using *cin*, we can create a simple calculater to show result of (+, -, *, %) of two inputs.

## Calculator
As another example, here is *calculator.cpp*.
```
#include <iostream>

using namespace std;

int main()
{
    int firstArg;
    int secondArg;
    cout << "Enter first argumetn: ";
    cin >> firstArg;
    cout << "Enter second argumetn: ";
    cin >> secondArg;

    cout << firstArg << " * " << secondArg << " = " << firstArg * secondArg << endl;
    cout << firstArg << " + " << secondArg << " = " << firstArg + secondArg << endl;
    cout << firstArg << " / " << secondArg << " = " << firstArg / secondArg << endl;
    cout << firstArg << " - " << secondArg << " = " << firstArg - secondArg << endl;
}
```

As you can wee, you can calculate and show the result. You can compile and run like below:
```
> g++ calculator.cpp -o calculator
> ./calculator
Enter first argumetn: 3
Enter second argumetn: 1
3 * 1 = 3
3 + 1 = 4
3 / 1 = 3
3 - 1 = 2
> ./calculator
Enter first argumetn: 9
Enter second argumetn: 4
9 * 4 = 36
9 + 4 = 13
9 / 4 = 2
9 - 4 = 5
```


