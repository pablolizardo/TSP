/*Diseñar un programa que cargue un vector A de 20 elementos numéricos y genere otro vector B,
que contenga los elementos del primer vector multiplicados por el valor 5 (cinco). Imprimir ambos
vectores.*/
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string tab = 			"\n ::: ";
	string br = 			"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";
	int vectorA[20];	
	int vectorB[20];	

	for (int i = 0; i < 20; ++i) {
		vectorA[i] = 0;
		vectorB[i] = 0;
	}
	for (int i = 0; i < 20 ; ++i) {
	 	cout << tab << "Ingrese el valor de la variable -> [" << i+1  << "] -> " ;
		cin >> vectorA[i];
		vectorB[i] = vectorA[i]*5;
	 } 
	 cout << br;
	 for (int i = 0; i < 20; ++i) cout << tab << "El resultado del vectorA[" << i +1 << "] (" << vectorA[i]<< ") x5 es " << vectorB[i];
}