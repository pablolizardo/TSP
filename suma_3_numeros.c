#include <cstdlib>
#include <iostream>

using namespace std;
int main(){ 
	int numero1 = 0;
	int numero2 = 0;
	int numero3 = 0;
	// las lineas de arriba son las que ingresan las variables.
	cout << "\n :::: Ingrese el primer valor: ";
	cin >> numero1;
	// con cin pido variables, con cout muestro cosas.

	cout << "\n :::: Ingrese el segundo valor: ";
	cin >> numero2;
	cout << "\n :::: Ingrese el tercer valor: ";
	cin >> numero3;
	// lo de aca abajo hace esto... 
	cout << "\n\n :::: El resultado de la suma es: " << numero1+numero2+numero3;
	cout << "\n\n\n";
}