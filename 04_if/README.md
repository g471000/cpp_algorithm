# IF
# Compare Variable
By using if statement, you can choose different option. type129.cpp is the prgram that if you type 129, then you will see cute emoji with a korean slang, "머선129", meaning what's happened! You can run the program like below:
```
> g++ type129.cpp
> ls
a.out       type129.cpp
> ./a.out
Enger a number: 128
You entered a value less than 129.
> ./a.out
Enger a number: 129
머선129 v^-^v....!
> ./a.out
Enger a number: 130
You entered a vlue greater than 129.
```

# Compare String
You can also compare string with ==. C++ string objects allow you to use all of the comparisons. You can write password checker or other program like below!
```
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
```

As the program shows, you can compare the input message that was given, and see if that was expected string or not.
You can run the program like below:
```
> g++ heizeNumberOne.cpp -o heizeNumberOne.o
> ./heizeNumberOne.o
Enter the best artist in the word(all lower case): 
heize
You are very smart, wonderful and amazing person. HEIZE <3
> ./heizeNumberOne.o
Enter the best artist in the word(all lower case): 
hei
.........Bye.
> cat heizeNumberOne.
cat: heizeNumberOne.: No such file or directory
```
