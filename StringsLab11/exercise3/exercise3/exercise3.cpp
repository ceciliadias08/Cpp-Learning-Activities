/*Find out what happens when we try to display a character vector that isn't a string. To do this, initialize two vectors, one being a string and the other being just a vector of characters. Display both with cout.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char validString[] = "Hello";
    char notValidString[] = {'H', 'e', 'l', 'l', 'o'};

    cout << validString << endl;
    cout << notValidString << endl;


}

