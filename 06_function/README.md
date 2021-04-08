# Function
# Simple add function
Instead of making huge long main method, we can create a method, and use it, and moreover, the function can be called more than one time in various places! you can run the function and see the result by
```
g++ add.c -o add.o
./add.o
```

In the example, *add.cpp*, as you can see, we placed add method before the main method, so that the main knows what is it.
(See add.cpp)
```
#include <iostream>

using namespace std;

int add (int x, int y){
		return x + y;
}

int main() {
	int result = add( 1, 2 );
	cout << "The result of add( 1, 2 ) is: " << result << '\n';
	cout << "Adding 3 and 4 gives us: " << add( 3, 4 ) << endl;
}
```

However, in a big program, it would be hard to figure out which one is using which one. For example, if there are 10 functions in a file, and there are multiple functions those are using others, then it would be hard to arrange the order of the function. So, you can use the concept, **function prototype**. Below is blueprint:
```
Return_Type function_name (arg_type arg1, ..., arg_typeN argN);
```

Here is an example. We are programming same add, but using the function prototype.
(See add_function.cpp)
```
#include <iostream>

using namespace std;

int add (int x, int y);

int main() {
    int result = add( 1, 2 );
    cout << "The result of add( 1, 2 ) is: " << result << '\n';
    cout << "Adding 3 and 4 gives us: " << add( 3, 4 ) << endl;
}

int add (int x, int y){
        return x + y;
}
```

Now, you do not need to worry about the order of the function. You can run the program like below:
```
g++ add_function.cpp -o add_function.o
./add_function.o
```

For both programs, you will see the same result:
```
The result of add( 1, 2 ) is: 3
Adding 3 and 4 gives us: 7
```


