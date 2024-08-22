/*Write a program that asks the user to enter two numbers. Store the
first number in a character vector and the second in a variable of type
entire. Show the result of multiplying the two numbers. To convert
the string to a number, research how to use the atoi function.
Enter two numbers: 3 5
The multiplication between them is 15.*/

#include <iostream>
using namespace std;

int main()
{
    char vet1[5];
    int vet2;

    cout << "Insira o primeiro numero: ";
    std::cin >> vet1;

    cout << "Insira o segundo numero: ";
    cin >> vet2;

    int vetor1 = atoi(vet1); //convertendo vetor para numero

    int resultado = vetor1 * vet2;

    cout << "A multiplicacao entre eles e " << resultado;
}
