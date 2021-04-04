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

## String
To deal with string, you can include string and use it like below.
Please see *fanName.cpp*
```
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fan_name;

    cout << "Please enter your fan name: ";
    cin >> fan_name;
    cout << "Hi " << fan_name << "! Heize's #1 fan!\n"
}
```

Like other programs, you can run like below:
```
> g++ fanName.cpp -o fanName
> ./fanName
Please enter your fan name: Pikachu_Dduck
Hi Pikachu_Dduck! Heize's #1 fan!
```

However, if you type like *Pikachu Dduck*, then it will only take *Pikachu*.
In this case, you can use getilne, to get the line and store it like below.
(*fanFullName.cpp*)
```
    getline(cin, fan_name, '\n');
```
Instead of taking just one word, this getline function will take all words until the line finds a '\n', which will show at the end of the line.
You can fun the upgraded version like below:
```
> g++ fanFullName.cpp -o fanFullName.o                                                                  
> ./fanFullName.o                                                                                       
Please enter your fan name: Pikachu Dduck                                                               
Hi Pikachu Dduck! Heize's #1 fan!  
```
