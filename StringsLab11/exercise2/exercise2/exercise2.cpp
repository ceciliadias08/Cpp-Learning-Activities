/*Write a program that asks for and displays user information as shown:
What's the name? John Maria
What concept do you deserve? B
Good morning, João Maria. Its concept is C.
Note that the program must be able to accept names made up of more than one word. Also note that the program adjusts the concept downwards*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string concept;
    
    cout << "What is your name? ";
    getline(cin, name);
    cout << "What concept do you deserve? ";
    cin >> concept;

    cout << "Good morning, " << name << endl;
    if (concept == "A" || concept == "a") {
        cout << "Your concept is B";
    }
    else if (concept == "B" || concept == "b") {
        cout << "Your concept is C";
    }
    else if (concept == "C" || concept == "c") {
        cout << "Your concept is D";
    }
    else if (concept == "D" || concept == "d") {
        cout << "Your concept is E";
    }
    else {
        cout << "Your concept is F";
    }
}
