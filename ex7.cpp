#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char carac;

    cout << "Digite um caractere: ";
    cin >> carac;

    if (carac >= 'a' && carac <= 'z') {
        cout << "O caractere digitado � uma letra min�scula.\n";
    } else if (carac >= 'A' && carac <= 'Z') {
        cout << "O caractere digitado � uma letra mai�scula.\n";
    } else if (carac >= '0' && carac <= '9') {
        cout << "O caractere digitado � um n�mero.\n";
    } else {
        cout << "O caractere digitado n�o � uma letra nem um n�mero.\n";
    }

    return 0;
}
