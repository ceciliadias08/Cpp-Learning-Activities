#include <iostream>
using namespace std;
/*Initialize a vector of 5 integers with any numbers. Show your vector on the screen and ask the user to choose a position of the vector they want to modify and the number they want to place in that position.*/

int main()
{
    int vet[5]{ 1, 2, 3, 4, 5 };
    cout << "Vector: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;

    cout << "---------------------" << endl;

    int posic;
    int nVal;
    cout << "Change position: " << endl;
    cin >> posic;

    cout << "New value: " << endl;
    cin >> nVal;

    cout << "---------------------" << endl;

    vet[posic] = nVal;

    cout << "Vector: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;

    return 0;
}

