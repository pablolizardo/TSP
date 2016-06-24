#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int f, c = 0;
	cout << "Introduzca la cantidad de filas" ;
	cin >> f;
	cout << "Introduzca la cantidad de columnas";
	cin >> c;
	//inicializar matriz
	int matriz[f][c];
	for (int i = 0; i < f; ++i) for (int j = 0; j < c; ++j) matriz[i][j]=0; 

	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "matriz[" << i << "|" << j << "] : ";
			cin >> matriz[i][j];
		}
	}
	// mostrar matriz
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "\t" << matriz[i][j] << "\t|";
		}
		cout << endl;
	}
	matriz[1][c-1]= 15;
	cout << "\n\n el valor 15 en la posicion 2,"<< c << "\n";
	// mostrar matriz
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "\t" << matriz[i][j] << "\t|";
		}
		cout << endl;
	}
	int fila = 0;
	cout << "Ingrese el numero de fila ";
	cin >> fila;
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			matriz[fila-1][j]=20;
		}
	}

	cout << "\n\n el valor 20 en toda la fila "<< fila << "\n";
	// mostrar matriz
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "\t" << matriz[i][j] << "\t|";
		}
		cout << endl;
	}
	int aux = 0;
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			aux = matriz[i][c-1];
			matriz[i][c-1]= matriz[i][1];
			matriz[i][1] = aux;
		}
	}
	cout << "\n\n instercambio de col 2 por la  "<< c << "\n";
// mostrar matriz
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "\t" << matriz[i][j] << "\t|";
		}
		cout << endl;
	}

	return 0;
}