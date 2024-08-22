/*Write a program that asks for and displays information as shown in the example
below. The number of characters for the first and middle name must be defined
at a constant.
First name? John
Last name? Smith
Good morning, John Smith
Welcome JS!*/

#include <iostream>
using namespace std;

const int sizeStr = 30; //outside the main function because it is used in more than one part of the program


int main()
{	
	char firstName[sizeStr];
	char lastName[sizeStr];

	cout << "First name ? ";
	cin >> firstName;
	cout << "Last name? ";
	cin >> lastName; 
	cout << "Good morning, " << firstName << " " << lastName << endl;
	cout << "Welcome " << firstName[0] << lastName[0] << "!";

	

	return 0;
}

