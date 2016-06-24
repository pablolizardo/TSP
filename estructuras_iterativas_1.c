#include <cstdlib>
#include <iostream>
using namespace std;
int main(){ 
	int numero = 0;
	int condicion_entre = 0;
	int condicion_mayor = 0;
	int condicion_menor = 0;
	int condicion_par = 0;
	int condicion_impar = 0;
	float suma = 0;
	float cantidad = 0;

	cout << "\n::: Ingrese numero: ";
	cin >> numero;

	while(numero != -1) {
	    if (numero>=50 && numero <=75) condicion_entre ++ ;
	    if (numero>75) condicion_mayor ++ ;
	    if (numero<50) condicion_menor ++ ;
		if (numero%2 == 0) condicion_par ++;
		else condicion_impar ++;

		cantidad ++;
		suma = suma + numero;
		cout << "\n::: Ingrese numero: ";
		cin >> numero;
	}
	cout << "\n\n\n\n\n";
	cout << "::: Entre 50 y 75: " << condicion_entre << "\n";
	cout << "::: Mayores a 75:  " << condicion_mayor << "\n";
	cout << "::: Menores a 45:  " << condicion_menor << "\n";
	cout << "::: Pares:         " << condicion_par << "\n";
	cout << "::: Impar:         " << condicion_impar << "\n";
	cout << "\n\n\n\n\n";
	cout << "::: Promedio:      " << suma/cantidad << "\n";
	cout << "\n\n\n\n\n";
}