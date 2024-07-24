#include <iostream>
using namespace std;
/*Write a program that creates two vectors of three elements each. The first vector must store product prices: Lettuce R$1.50/Kg, Beetroot R$2.00/Kg, Carrots R$1.00/Kg. The second vector must store the quantity desired for each product. This quantity will be informed by the user. Calculate the total payable per product and the final total of the purchase.*/

int main()
{
    float produPrc[3]{1.50f, 2.00f, 1.00f}; //store product prices
    float quantiProdu[3]; //store the quantity of each product

    cout << "Dear customer," << endl << "Digite a quantidade de quilos desejados" << endl;
    cout << "Lettuce: ";
    cin >> quantiProdu[0];
    cout << "Beet: ";
    cin >> quantiProdu[1];
    cout << "Carrot: ";
    cin >> quantiProdu[2];

    cout << "Purchase Summary" << endl << "----------------------" << endl;
    cout << "Lettuce R$" << produPrc[0] * quantiProdu[0] << endl;
    cout << "Beet R$" << produPrc[1] * quantiProdu[1] << endl;
    cout << "Carrot R$" << produPrc[2] * quantiProdu[2] << endl;

    cout << "----------------------" << endl;
    cout << "Total R$" << produPrc[0] * quantiProdu[0] + produPrc[1] * quantiProdu[1] + produPrc[2] * quantiProdu[2] << endl;

    return 0;

}

