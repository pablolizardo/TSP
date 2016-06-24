#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n =0;
	int mayor = 0;
	int menor = 9999;
	int mm=0;
	cout << "Ingrese el tamaño de la variable datos -> \t" ;
	cin >> n;
	int datos[n];
	for (int i = 0; i < n; ++i) datos[i] = 0;

	for (int i = 0; i < n; ++i) {
		cout << "Ingrese el valor del componente " << i+1 << " -> \t";
		cin >> datos[i];
	}
	for (int i = 0; i < n; ++i) {
		if (datos[i]>mayor) mayor=datos[i];
		else if (datos[i]<menor) menor =datos[i];
	}
	cout << "El numero mayor es el " << mayor << "\n";
	cout << "El numero menor es el " << menor << "\n";




	return 0;
}