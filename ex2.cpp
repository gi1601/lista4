#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    char letra; 

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u' or letra == 'A' or letra == 'E' or letra == 'I' or letra == 'O' or letra == 'U') {
        cout << "A letra digitada eh uma vogal" << endl;
    } else {
        cout << "A letra digitada eh uma consoante" << endl;
    }

    return 0;
}
