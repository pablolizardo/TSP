	#include <cstdlib>
	#include <iostream>
	using namespace std;
	int main(int argc, char const *argv[]) {
		string tab = "\n ::: ";
		string br = "\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";
		int array[5];
		for (int i = 0; i < 5; ++i) {
			cout << tab << "Ingrese un valor en la posicion " << i << " de la variable array - > ";
			cin >> array[i];
		}
		for (int i = 0; i < 5; ++i) {
			cout << tab << "la variable array en posicion " << i << " tiene como valor " << array[i] << "\n";
		}
		cout << tab << "Gracias por su tiempo. \n \n \n";
	}