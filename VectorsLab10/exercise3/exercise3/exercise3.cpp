#include <iostream>
using namespace std;

/*Construct a function that takes a vector of five integer elements and returns the sum of the elements of the vector. Build a program to test the function*/

int main()
{
	int fun[5]{ 0 };
	cout << "Enter 5 values: " << endl;
	cin >> fun[0];
	cin >> fun[1];
	cin >> fun[2];
	cin >> fun[3];
	cin >> fun[4];
	cout << "The vector sum is " << fun[0] + fun[1] + fun[2] + fun[3] + fun[4] << endl;

	return 0;
}
