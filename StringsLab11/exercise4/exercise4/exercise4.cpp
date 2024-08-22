/*Construct a program that contains an initialized vector as shown below.
Use the strlen and sizeof functions to discover and display the number of elements and the size of the vector. char name[] = "C++ Primer Plus";*/

#include <iostream>
using namespace std;

int main()
{
    char name[] = "C++ Prime Plus";

    cout << "String's sizes: " << strlen(name) << endl;
    cout << "Vector's sizes " << sizeof(name);
}

