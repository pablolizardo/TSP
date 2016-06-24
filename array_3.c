	#include <cstdlib>
	#include <iostream>
	using namespace std;
	int main(int argc, char const *argv[]) {
		string tab = "\n ::: ";
		int aux =0; 
		int n =0;
		int i = 0;
		int j = 0;

		cout << tab << "ingrese el tamaño de la variable n -> ";
		cin >> n;

		int arreglo[n];

		for ( i = 0; i < n; i++) arreglo[i] = 0; 

		for (i = 0; i < n; i++) {
			cout << tab << "ingrese el numero de la variable con indice " << i << " -> ";
			cin >> arreglo[i];
		}

		for (int i = 0; i < n-1; i++) {
			for (int j = i+1; j < n; j++) {
				if (arreglo[i]>arreglo[j]) {
					aux = arreglo[i];
					arreglo[i] = arreglo[j];
					arreglo[j] = aux;
				}
			}
		}
		system("clear");
		cout << tab << "RESULTADOS ORDENADOS DEL ARREGLO:";
		for (int i = 0; i < n; ++i) cout << tab << arreglo[i] << tab; 
	}