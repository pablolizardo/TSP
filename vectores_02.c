/* Cargar un vector de n componentes, y determinar el mayor de los valores cargados, indicando en qué posición se encuentra en el vector. */

	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[]) {
		system("clear");
		string tab = 			"\n ::: ";
		string br = 			"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";
		
		int respuestas[2];
		int size = 0;
		int mayor = 0;
		int posicionMayor = 0;

		cout << tab << "Ingrese el tamaño del array -> ";
		cin >> size;

		int array[size];

		for (int i = 0; i < size; ++i) array[i] = 0;
		for (int i = 0; i < size; ++i) {
			cout << tab << "Ingrese el valor de la posicion " << i << " -> ";
			cin >> array[i];
		}
		for (int i = 0; i < size; ++i) {
			if (array[i] > mayor) {
				mayor = array[i];
			 	posicionMayor = i;
			}
		} 

		cout << tab << "El numero mayor es el " << mayor << " y esta alojado en la posicion " << posicionMayor;

		cout << br << tab << br;
	}