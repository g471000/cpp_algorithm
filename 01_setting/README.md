#Basic Setup
#Installing c++
To check if you have g++ installed, type in g++ and hit enter. If you have your g++ compiler already installed, you should see like below:
```
> g++
clang: error: no input files
```

If you do not have one, you can install for your computer. Depends on your OS, you will need to use different command. For Ubuntu:
```
aptitude install g++
```
For Mac, you might be able to download as
```
brew intall g++
```

#Simple Program
.cpp is the standard extension for C++ source files. The first program for this project is printing out simple message. To run the program, called helloHeize, Type:
```
g++ helloHeize.cpp -o helloHeize
```

The -o option to g++ provides a name of the output file, and the default is a.out.
You can run the program, by typing ./helloHeize and this will print like below.
```
> ./helloheize
Hello, Heize
```
