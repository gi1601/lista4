#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char carac;

    cout << "Digite um caractere: ";
    cin >> carac;

    if (carac >= 'a' && carac <= 'z') {
        cout << "O caractere digitado é uma letra minúscula.\n";
    } else if (carac >= 'A' && carac <= 'Z') {
        cout << "O caractere digitado é uma letra maiúscula.\n";
    } else if (carac >= '0' && carac <= '9') {
        cout << "O caractere digitado é um número.\n";
    } else {
        cout << "O caractere digitado não é uma letra nem um número.\n";
    }

    return 0;
}
