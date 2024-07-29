/*Declare a vector of three double’s and ask the user to enter the values ​​of the vector. Create a function that takes the three-position vector and returns the result of multiplying the first element by the last subtracted by the middle term. Call the function and show its return in the main function.*/

#include <iostream>
using namespace std;

// Function that takes a vector of three positions and returns the result of the multiplication
double calculate(double vetor[3]) {
    return (vetor[0] * vetor[2]) - vetor[1];
}

int main()
{
    double vetor[3];

    // Ask the user to enter the vector values
    cout << "Enter the 1st value: ";
    cin >> vetor[0];
    cout << "Enter the 2nd value: ";
    cin >> vetor[1];
    cout << "Enter the 3rd value: ";
    cin >> vetor[2];

    // Call the function and show its return
    double result = calculate(vetor);
    cout << "The result is: " << result;


}

