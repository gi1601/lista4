#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float celsius, fahrenheit, kelvin, temperatura;
	
	cout << "Informe a temperatura em Celsius: ";
	cin >> celsius;
	
	cout << "Qual escala termométrica você quer?\n";
	cout << "1- para Fahrenheit\n";
	cout << "2- para Kelvin\n";
	cin >> temperatura;
	
	if (temperatura==1){
		fahrenheit = ((celsius * 9.0 / 5.0) + 32.0);
		cout << fahrenheit;
	}else if (temperatura==2){
		kelvin = (celsius + 273);
		cout << kelvin;
	}
}
