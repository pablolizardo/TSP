#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int fc = 0;
	cout << "Ingrese el tamaño de la matriz cuadrada A";
	cin >> fc;
	m[fc][fc];
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
	return 0;
}