#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout << "Informe um n�mero inteiro: ";
	cin >> numero;
	
	if (numero<0){
		cout << "� um n�mero negativo";
	}else if (numero==0){
		cout << "� zero";
	}else if (numero>0){
		cout << "� um n�mero positivo";
	}
	
}
