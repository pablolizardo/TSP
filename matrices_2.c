#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int n, m , mayor = 0;
	int posicion[2] = {0,0};
	int menor = 999999;
	cout << "Ingrese la cantidad de filas de la matriz -> " ;
	cin >> n;
	cout << "Ingrese la cantidad de columnas de la matriz -> ";
	cin >> m;
	int matriz[n][m];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			matriz[i][j] = 0;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << "Introduzca el valor de la posicion [" << i << "|" << j << "]";
			cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
		{
			if(matriz[i][j]>mayor){ 
				mayor = matriz[i][j]; 
				posicion[0] = i;
				posicion[1] = j;
			}
		}
	}
	cout << "El numero mayor es el " << mayor << " almacenado en la posicion [" << posicion[0] << "|" << posicion[1] << "]\n";
	return 0;
}