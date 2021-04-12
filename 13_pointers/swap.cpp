#include <iostream>

using namespace std;

void swap1 (int left, int right)
{
		int temp = left;
		left = right;
		right = temp;
}

void swap2 (int *p_left, int *p_right)
{
		int temp = *p_left;
		*p_left = *p_right;
		*p_right = temp;
}

int main()
{
		int x, y;
		cout << "Please enter first number: ";
		cin >> x;
		cout << "\nPlease endter second number: ";
		cin >> y;

		cout << "You entered x: " << x << ", y: " << y << endl;
		cout << "\nSwap function without using pointer...." << endl;
		swap1(x, y);
		cout << "x: " << x << ", y: " << y << endl;

		swap2(&x, &y);
		cout << "\nSwap function with using pointer...." << endl;
		cout << "x: " << x << ", y: " << y << endl;
}
