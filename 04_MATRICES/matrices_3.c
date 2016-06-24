#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int filas,columnas = 0;
	cout << "Ingrese la cantidad de filas \t -> \t ";
	cin >> filas;
	while(filas>5) {
		cout << "Ingrese un valor valido (Menor a 5)\n";
	    cout << "Ingrese la cantidad de filas \t -> \t ";
		cin >> filas;
	}
	cout << "Ingrese la cantidad de columnas \t -> \t ";
	cin >> columnas;
	while(columnas>5) {
		cout << "Ingrese un valor valido (Menor a 5)\n";
	    cout << "Ingrese la cantidad de columnas \t -> \t ";
		cin >> columnas;
	}
	int sumaFilas[filas];
	int sumaCols[columnas];
	int matriz[filas][columnas];

	for (int i = 0; i < filas; ++i) sumaFilas[i]=0; 
	for (int i = 0; i < columnas; ++i) sumaCols[i]=0; 

	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			cout << "Cargar el valor de la posicion [" << i << "|" << j << "] -> ";
			cin >> matriz[i][j];
		}
	}

	//sumas filas
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			sumaFilas[i]+= matriz[i][j];
		}
	}
	//sumas columnas
	for (int i = 0; i < columnas; ++i) {
		for (int j = 0; j < filas; ++j) {
			sumaCols[i]+= matriz[j][i];
		}
	}

	// mostrar matriz
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			cout << "\t" << matriz[i][j] << "\t|";
		}
			cout << endl;
	}

	//mostrar sumas
	cout << "suma de filas " << endl;
	for (int i = 0; i < filas; ++i) {cout << "\t" << sumaFilas[i] << "\t"; }
	cout << endl;

	cout << "suma de columnas " << endl;
	for (int i = 0; i < columnas; ++i) {cout << "\t" << sumaCols[i] << "\t"; }
	cout << endl;

	return 0;
}