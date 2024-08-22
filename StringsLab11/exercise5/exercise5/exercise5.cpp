/*Build a function that takes a string as a parameter and returns the last
character of the string, regardless of its length. Build a program
to test the function, as shown below:
Enter a word: progcomp
In progcomp the last letter is p.*/

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;

	cout << "Enter a word: " << endl;
	getline(cin, word);

	char lastLetter = word[word.length() - 1];

	cout << "On " << word << " the last letter is " << lastLetter << endl; 

}