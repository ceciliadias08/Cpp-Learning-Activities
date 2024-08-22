/*Ask the user to write their full name and the current date, storing both
the information in different character vectors. Create a character vector
to save the concatenation of the name with "was here in" and the date
provided. Show the result by displaying the contents of this vector.
Name: João Filho
Date: 07/08/2017
Joao Filho was here on 07/08/2017.*/

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char nome[20];
	char data[20];
	char ceauti[60];

	cout << "Enter your name: " << endl;
	cin >> nome;

	cout << "Enter the date: " << endl;
	cin >> data;

	strcpy(ceauti, nome);
	strcat(ceauti, " was here on ");
	strcat(ceauti, data);

	cout << ceauti << endl;
}
