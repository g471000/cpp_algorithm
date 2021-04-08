# LOOP
## While
**While loops** are the simplest kind of loop. It is like an if statement, but repeating.
Here is an example (whileILoveHeize.cpp)
```
#include <iostream>

using namespace std;

int main(){
	int i = 0; // declare variable

	while ( i < 10 ) {
		cout << "I love you, Heize " << i++ << "\n";
	}
}
```

The program runs and print I love you, Heize with number of loops until it runs 10 times.
You can run the program like below:
```
> g++ whileILoveHeize.cpp -o whileILoveHeize.o
> ./whileILoveHeize.o
I love you, Heize 0
I love you, Heize 1
I love you, Heize 2
I love you, Heize 3
I love you, Heize 4
I love you, Heize 5
I love you, Heize 6
I love you, Heize 7
I love you, Heize 8
I love you, Heize 9
```

## For Loop
For loop seems little complicated, but it is telling us where to start, when to end, and what's the change between each loop.
Let's make same program that we made with while loop.
```
#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 10; i++){
		cout << "I love you, Heize " << i << "\n";
	}
}
```

It is saying that create i that is 0, repeat until i hits 10 (excluded), and increase i by 1 every time.
You can run the program like below:
```
> ./forILoveHeize.o
I love you, Heize 0
I love you, Heize 1
I love you, Heize 2
I love you, Heize 3
I love you, Heize 4
I love you, Heize 5
I love you, Heize 6
I love you, Heize 7
I love you, Heize 8
I love you, Heize 9
```
