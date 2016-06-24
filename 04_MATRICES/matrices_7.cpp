#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	int f, c = 0;
	cout << "Ingrese cantidad de filas -> ";
	cin >> f;
	cout << "Ingrese cantidad de columnas -> ";
	cin >> c;
	int m_a[f][c];
	int m_b[f][c];

	for (int i = 0; i < f; ++i) for (int j = 0; j < c; ++j) m_a[i][j] = m_b[i][j]= 0; 
	for (int i = 0; i < f; ++i) for (int j = 0; j < c; ++j) {
		cout << "Introduzca el valor de la posicion [" << i << "|" << j << "]";
		cin >> m_b[i][j];
	}
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			if (m_b[i][j]%2!=0) { m_a[i][j]=1 ; }
		}
	}
	cout << "\n\n MATRIZ A \n\n";
	for (int i = 0; i< f ; i++){
		for (int j=0; j<c ; j++) {
			cout << "\t" << m_a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n\n MATRIZ B \n\n";
	for (int i = 0; i< f ; i++){
		for (int j=0; j<c ; j++) {
			cout << "\t" << m_b[i][j] << "\t";
		}
		cout << endl;
	}




	return 0 ;
}