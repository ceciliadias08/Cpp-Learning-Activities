/*Ask the user to enter the name of 3 commemorative dates. Concatenate the 3 strings into a single character vector forming a sentence, as shown in the example. Define another character vector with the word "Christmas" and compare it with what was typed by the user. If any of the strings entered are "Christmas", display the message "Christmas is also one of my favorite holidays!".
What are your favorite commemorative dates?
Carnival
Christmas
New Year
Carnival, Christmas and New Year are beautiful festivals.
Christmas is also one of my favorite holidays!*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char data1[20];
    char data2[20];
    char data3[20];
    char concat[100];

    cout << "Quais suas datas comemorativas preferidas? ";
    cin.getline(data1, 20);
    cin.getline(data2, 20);
    cin.getline(data3, 20);

    strcpy(concat, data1);
    strcat(concat, ", ");
    strcat(concat, data2);
    strcat(concat, ", ");
    strcat(concat, data3);
    strcat(concat, " sao belas festas.");

    cout << concat << endl;

    if (strcmp(data1, "natal") == 0 || strcmp(data1, "Natal") == 0 ||
        strcmp(data2, "natal") == 0 || strcmp(data2, "Natal") == 0 ||
        strcmp(data3, "natal") == 0 || strcmp(data3, "Natal") == 0) {
        cout << "O natal tambem e uma das minhas datas preferidas!" << endl;
    }

}