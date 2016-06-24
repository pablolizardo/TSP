#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int f, c = 0;
	int mayor= 0;
	int menor =9999;
	int numero = 0;
	


	cout << "Ingrese filas - > ";
	cin >> f;
	cout << "Ingrese columnas - > ";
	cin >> c;
	int matriz[f][c];
	int filas_mayor[f];
	int filas_menor[f];
	int columnas_mayor[c];
	int columnas_menor[c];

	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			matriz[i][j] = 0; 
			filas_mayor[i] = 0;
			filas_menor[f] = 999;
			columnas_mayor[i] = 0;
			columnas_menor[f] = 999;
		} 
	}
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "Ingrese matriz:[" << i << "|" << j << "]";
			cin >> matriz[i][j];
		}
	}
	cout << "\n\n MATRIZ \n\n";
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "\t" << matriz[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			if (matriz[i][j] > filas_mayor[i]) filas_mayor[i]=matriz[i][j] ;
			if (matriz[i][j] < filas_menor[i]) filas_menor[i]=matriz[i][j] ;
		}
	}
	for (int i = 0; i < f; ++i) {
		cout << "fila " << i << " mayor : " << filas_mayor[i] << " . Menor: " << filas_menor[i] << endl;
	
	}
	cout << "\n\n Ingrese el numero a buscar -> ";
	cin >> numero;
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			if (matriz[i][j]==numero){
				cout << "el valor se encontro en la posicion " << i << "," << j << "\n\n";
			}
		}
	}
	return 0 ;
}