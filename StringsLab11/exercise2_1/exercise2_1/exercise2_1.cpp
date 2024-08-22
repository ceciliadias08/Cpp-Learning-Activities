/*Set a password using a character vector in your program. Ask the
user who enters his password. Check if he entered the correct password, if yes
show the message "correct password", if not show the message "incorrect password".
To compare strings, ask how to use the strcmp function.
Enter password: ProgComp
Incorrect password.*/

#include <iostream>
using namespace std;

int main()
{
	string senha;
	string senhaInserida;

	senha = "progcomp";

	cout << "Insira sua senha: ";
	cin >> senhaInserida;

	if (senha == senhaInserida) {
	cout << "Sua senha esta correta";
	}
	else {
	cout << "Senha incorreta, tente novavente";
	}
}