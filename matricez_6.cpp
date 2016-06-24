#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int f, c = 0;
	cout << "Ingrese filas - > ";
	cin >> f;
	cout << "Ingrese columnas - > ";
	cin >> c;
	int matriz[f][c];
	for (int i = 0; i < f; ++i) {for (int j = 0; j < c; ++j) {matriz[i][j]=0; } }
	for (int i = 0; i < f; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << "Ingrese matriz:[" << i << "|" << j << "]";
			cin >> matriz[i][j];
		}
	}
	return 0 ;
}