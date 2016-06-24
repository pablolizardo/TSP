#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int fc = 0;
	int pares, impares, ceros = 0;
	cout << "Ingrese el tamaño de la matriz cuadrada A";
	cin >> fc;
	int m[fc][fc];
	for (int i = 0; i < fc; ++i) {
			for (int j = 0; j < fc; ++j) {
				m[i][j] = 0;
			}
	}
	for (int i = 0; i < fc; ++i)
	{
		for (int j = 0; j < fc; ++j)
		{
			cout << "Ingrese el valor de la posicion ["<< i << "|" << j << "]";
			cin >> m[i][j];
		}
	}
	for (int i = 0; i < fc; ++i) {
		for (int j = 0; j < fc; ++j) {
			if (m[i][j]%2 == 0 ) {pares++;} else {impares++;}
			if (m[i][j] == 0) ceros++;
		}
	}
	for (int i = 0; i < fc; ++i) {
		for (int j = 0; j < fc; ++j) {
			cout <<  "\t" << m[i][j] << "\t";
		}
		cout << endl;
	}


	int aux = 0; 
	for (int i = 0; i < fc; ++i) {
			aux = m[i][fc-1] ;
			m[i][fc-1]=m[i][0];
			m[i][0]=aux;
	}
	cout << "\n\n";
	for (int i = 0; i < fc; ++i) {
		for (int j = 0; j < fc; ++j) {
			cout <<  "\t" << m[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n\n";
	
	cout << "pares : " << pares << "\n";
	cout << "impares : " << impares << "\n";
	cout << "ceros : " << ceros << "\n";
	return 0;
}