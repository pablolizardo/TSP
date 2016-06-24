#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n = 20;
	int array[n];

	for (int i = 0; i < n; ++i) {array[i]=0; }
	for (int i = 0; i < n; ++i) {
		cout << "Ingrese el valor de la posicion  " << i << "\n";
		cin >> array[i];
	}
	for (int i = 0; i < n; ++i)	{
		cout << "La posicion " << i+1 << " vale " << array[i];
	}
	return 0;
}