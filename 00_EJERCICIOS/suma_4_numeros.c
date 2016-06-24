#include <cstdlib>
#include <iostream>
using namespace std;
int main(){ 
	int numero1 = 0;
	int numero2 = 0;
	int numero3 = 0;
	int numero4 = 0;
	int suma = 0;
	cout << "\n :::: Ingrese el primer valor: ";
	cin >> numero1;
	cout << "\n :::: Ingrese el segundo valor: ";
	cin >> numero2;
	cout << "\n :::: Ingrese el tercer valor: ";
	cin >> numero3;
	cout << "\n :::: Ingrese el cuarto valor: ";
	cin >> numero4;
	suma = numero1+numero2+numero3+numero4;
	cout << "\n\n :::: El resultado de la suma es: " << suma;
	cout << "\n\n\n";
	if (suma > 0) {
		cout << "El numero es positivo\n\n";
	} else {
		if (suma <0) {
			cout << "El numero es negativo\n\n";
		} else {
			cout << "El numero es igual a 0\n\n";
		}
	}
	cout << "\n\n\n";
}