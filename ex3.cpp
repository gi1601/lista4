#include <iostream>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout << "Informe um número inteiro: ";
	cin >> numero;
	
	if (numero<0){
		cout << "É um número negativo";
	}else if (numero==0){
		cout << "É zero";
	}else if (numero>0){
		cout << "É um número positivo";
	}
	
}
