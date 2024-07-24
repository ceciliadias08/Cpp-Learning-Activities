#include <iostream>
using namespace std;

/*Write a program that creates a vector vetA of 5 integer elements, initializing them to the values ​​10, 20, 30, 40 and 50. Create a second vector vetB by initializing only the first two elements to 10 and 20 and all the remaining elements to zero. Create a third vector vetC by initializing only the third element to the value 30 and the others to zero. Display the values ​​contained in each vector to check the stored values:*/

int main()
{
    int vetA[5]{ 10, 20, 30, 40, 50 };
    int vetB[5]{ 10, 20, 0, 0, 0 };
    int vetC[5]{ 0, 0, 30, 0, 0 };

    cout << "Vector A: " << vetA[0] << " " << vetA[1] << " " << vetA[2] << " " << vetA[3] << " " << vetA[4] << endl;
    cout << "Vector B: " << vetB[0] << " " << vetB[1] << " " << vetB[2] << " " << vetB[3] << " " << vetB[4] << endl;
    cout << "Vector C: " << vetC[0] << " " << vetC[1] << " " << vetC[2] << " " << vetC[3] << " " << vetC[4] << endl;

    return 0; 

}
