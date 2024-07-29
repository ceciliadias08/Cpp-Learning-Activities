/*UFERSA adopted a new formula to calculate the partial average of evaluations. In the new system, the partial average is the arithmetic average of the three grades. The old system used weights, with the partial average given by the formula below:
𝑀é𝑑𝑖𝑎 = n𝑛𝑜𝑡𝑎1 ∗ 2 + 𝑛𝑜𝑡𝑎2 ∗ 3 + 𝑛𝑜𝑡𝑎3 ∗ 4 / 9
Initialize a vector of three floats with the weights of the notes from the old system. Create another vector to store the student's grades, ask what their grades were and fill the vector with them. Use the vectors to calculate the student's average in the new and old systems and show them on the screen.*/

#include <iostream>
using namespace std;

int main()
{
    // Initialize a vector of three floats with the weights of the grades from the old system
    float subject[3];
    float weights[3]{ 2.0, 3.0, 4.0 };
    float oldSystemGrade, newSystemGrade;

    // Ask for the student's grades and fill the vector with them
    cout << "Enter the grade for subject 1: ";
    cin >> subject[0];
    cout << endl << "Enter the grade for subject 2: ";
    cin >> subject[1];
    cout << endl << "Enter the grade for subject 3: ";
    cin >> subject[2];

    // Calculate the average in the old system (weighted average)
    oldSystemGrade = (subject[0] * weights[0] + subject[1] * weights[1] + subject[2] * weights[2]) / 9;

    // Calculate the average in the new system (arithmetic)
    newSystemGrade = (subject[0] + subject[1] + subject[2]) / 3;

    cout << "Old system's grades: " << oldSystemGrade << endl;
    cout << "New system's grades: " << newSystemGrade << endl;

    return 0;

}
