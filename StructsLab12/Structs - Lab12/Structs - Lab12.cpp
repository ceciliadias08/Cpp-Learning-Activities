#include <cstring>
#include <iostream>
#include <string>

using namespace std;

/* Exercise 1: The chocolate structure contains three members:

The first member stores the brand of the chocolate bar.
The second member stores the weight of the bar (with a fractional part).
The third member stores the number of calories (an integer value).
Write a program that declares such a structure and creates a variable named snack,
initializing its members to "Charge", 2.3, and 350, respectively.
The initialization should be part of the variable declaration.
Finally, the program should display the contents of the snack variable.

Exercise 2: The chocolate structure contains three members, as described in the previous question.
Write a program to create an array capable of storing three chocolates.
Initialize them with values of your choice, and then display the contents of each record. */

struct Chocolate { // declaration of the struct
    string brand;
    double weight;
    int calories;
};

int main()
{
    // Exercise 1: Declaring and initializing the struct 'snack' with specified values
    Chocolate snack = { "M&M", 2.3, 350 }; // initialize struct

    // Exercise 1: Displaying the contents of the 'snack' variable
    cout << snack.brand << endl << snack.weight << endl << snack.calories << endl; // access struct 

    // Exercise 2: Creating an array to store three 'Chocolate' structs
    Chocolate Choc[3];

    // Exercise 2: Initializing each element of the array
    Choc[0] = snack;
    Choc[1] = { "Kit Kat", 33.3, 200 };
    Choc[2] = { "Snickers", 23.5, 150 };

    // Exercise 2: Displaying the contents of each struct in the array
    cout << Choc[0].brand << endl << Choc[0].calories << endl << Choc[0].weight << endl;
    cout << Choc[1].brand << endl << Choc[1].calories << endl << Choc[1].weight << endl;
    cout << Choc[2].brand << endl << Choc[2].calories << endl << Choc[2].weight << endl;
}
