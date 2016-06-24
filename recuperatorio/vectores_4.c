#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n =0;
	int mayor = 0;
	int menor = 9999;
	cout << "Ingrese el tamaño de la variable datos -> \t" ;
	cin >> n;
	int datos[n];
	for (int i = 0; i < n; ++i) datos[i] = 0;

	for (int i = 0; i < n; ++i) {
		cout << "Ingrese el valor del componente " << i+1 << " -> \t";
		cin >> datos[i];
	}
	int aux = 0;
	for (int i = 0; i < n-1; ++i) {
		for (int j = i+1; j < n; ++j) {
			if (datos[j]<datos[i]) {
				aux = datos[j];
				datos[j] = datos[i];
				datos[i]=aux;
			}
		}
	}
	cout << "El arreglo ordenado es:";
	for (int i = 0; i < n; ++i) cout << "Elemento " << i << " vale ahora \t-> " << datos[i] << "\n"; 

	return 0;
}