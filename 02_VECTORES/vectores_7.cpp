#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 20;
	int suma = 0;
	int array[n];

	for (int i = 0; i < n; ++i) {array[i]=0; }
	for (int i = 0; i < n; ++i) {
		cout << "Ingrese el valor de la posicion  " << i+1<< "\t->\t";
		cin >> array[i];
	}
	for (int i = 0; i < n; ++i)	{
		cout << "La posicion " << i+1 << " vale \t->\t" << array[i] << "\n";
	}
	for (int i = 0; i < n; ++i)
	{
		if (i%2!=0)
		{
		cout << "La posicion " << i+1 << " vale \t->\t" << array[i] << "\n";
		suma += array[i];
		}
	}
	cout << "La suma de las posiciones pares del array es \t->\t" << suma<<"\n";
	return 0;
}