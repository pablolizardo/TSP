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
	matriz[2][c]= 15;
	cout << "\n\n el valor 15 en la posicion 2,c";
	// mostrar matriz
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "\t" << matriz[i][j] << "\t|";
		}
		cout << endl;
	}
	return 0;
}