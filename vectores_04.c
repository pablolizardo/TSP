/* Cargar un vector de n componentes y ordenarlo de menor a mayor. */ 
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string tab = 			"\n ::: ";
	string br = 			"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";
	int size=0;

	cout << tab << "Ingrese el tamaño del array -> ";
	cin >> size;
	int array[size];	
	for (int i = 0; i < size; ++i) array[i] = 0; 
	for (int i = 0; i < size; ++i) {
		cout << tab << "Ingrese el valor de la variable en posicion " << i << " -> ";		
		cin >> array[i];
	}
}