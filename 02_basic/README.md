#The Basics of C++
#Intro to the C++ language
Let's lookat the simplest possible program:
```
int main()
{
}
```
The first line, tells the compiler that there is a funciton named **main**, and the funtion returns an integer. The **curly braces**, { and }, signal the beginning and end of functions. 

What about this? (hello.cpp)
```
#include <iostream>

using namespace std;

int main()
{
	cout << "HEY, you, I'm alive! Oh, and Hello Heize!\n";
}
```

The first line
```
#include <iostream>
```
is an **include statement** that tells the compiler to put code from the header file called *iostream* into our program before creating the executable. The *iostream* header file comes with the compiler and allows user to input and output. 

You will be able to run the program and will see the output:
```
> g++ hello.cpp -o hello
> ./hello
HEY, you, I'm alive! and Hello Heize!
```

What is the next statement?
```
using namespace std;
```
This is code that ALMOST C++ programs will have. We will talk about this in the future.

And let's see the next line:
```
cout << "HEY, you, I'm alive! Oh, and Hello Heize!\n";
```
This is called *cout* object, pronouced as "C out", which display text. This is why we included *iostream* header file.




