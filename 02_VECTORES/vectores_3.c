// Diseñar un programa que cargue un vector A de 20 elementos numéricos y genere otro vector B,
// que contenga los elementos del primer vector multiplicados por el valor 5 (cinco). Imprimir ambos
// vectores.

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 20;
	int datos[n];
	int datos_B[n];
	for (int i = 0; i < n; ++i){
		datos[i] = 0;
		datos_B[i] = 0;
	}

	for (int i = 0; i < n; ++i) {
		cout << "Ingrese el valor del componente " << i+1 << " -> \t";
		cin >> datos[i];
		datos_B[i] = datos[i]*5;
	}
	cout << "Los valores del vector A:\n";
	for (int i = 0; i < n; ++i) cout << "Componente " << i+1 << "\t -> \t" << datos[i] << "\n";
	cout << "Los valores del vector B:\n";
	for (int i = 0; i < n; ++i) cout << "Componente " << i+1 << "\t -> \t" << datos_B[i] << "\n";
	return 0;
}