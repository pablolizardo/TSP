#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int n = 10;
	int vector_a[n];
	int vector_b[n];
	for (int i = 0; i < n; ++i) {
		vector_a[i]=0;
		vector_b[i]=0;
	}
	for (int i = 0; i < n; ++i) {
		cout << "Ingrese el valor del indice " << i << "\t->\t";
		cin >> vector_a[i];
	}
	vector_a[3] = 9;
	vector_a[2] = vector_a[8];
	cout << "\tA\tB\n";
		for (int i = 0; i < n; ++i) {
		vector_b[i] = vector_a[i] *2;
		cout << i << "\t" << vector_a[i] << "\t" << vector_b[i]<<"\n";
	}
}