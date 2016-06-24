#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Ingrese tamaño de matriz -> ";
	cin >> n;
	int m[n][n];
	int suma_filas[n] ;
	int suma_columnas[n];


	for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
		m[i][j]=0;
		suma_filas[i] = 0;
		suma_columnas[j] = 0 ;
	}

	for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
		cout << "Ingrese el valor de la posicion " << i << "|" << j << " -> ";
		cin >> m[i][j];
	}

	int pares = 0;
	int pares_suma = 0;



	for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) if (m[i][j]%2==0) {
		pares++;
		pares_suma+=m[i][j];
	}

	cout << "\n\nMATRIZ :\n\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "\t" << m[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "CONTADOR PARES: " << pares << " ACUMULADOR PARES: " << pares_suma;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			suma_filas[i] += m[i][j];
			suma_columnas[i] += m[j][i];
		}
	}

	cout << "\n\n FILAS acumulador : \n";
	for (int i = 0; i < n; ++i)
	{
		cout << "\t" << suma_filas[i] << "\t";
	}
	cout << "\n\n";

	cout << "\n\n COLUMNAS acumulador : \n";
	for (int i = 0; i < n; ++i)
	{
		cout << "\t" << suma_columnas[i] << "\t";
	}
	cout << "\n\n";

}
