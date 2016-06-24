#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int laboratorios[5];
	int remedios[5];
	int cantidadRemedios =0;
	int aux = 0 ;
	for (int i = 0; i < 5; ++i)
	{
		laboratorios[i] = remedios[i] = 0;
	}
	for (int i = 0; i < 5; ++i)
	{
		cout << "Ingrese el legajo del laboratorio " << i+1 << " -> ";
		cin >> laboratorios[i];
		cout << "ingrese la cantidad de remedios que tiene el laboratorio " << i+1 << " -> " ;
		cin >> remedios[i];
		cantidadRemedios += remedios[i];
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = i+1; j < 5; ++j) {
			if (remedios[j]<remedios[i]) {
				aux = remedios[j];
				remedios[j] = remedios[i];
				remedios[i] = aux;
				aux = laboratorios[j];
				laboratorios[j] = laboratorios[i];
				laboratorios[i] = aux;
			}
		}
	}
	cout << "Legajo\tCantidad\n";
	for (int i = 0; i < 5; ++i)
	{
		cout << laboratorios[i] << "\t" << remedios[i] << "\n";
	}
	return 0;
}
