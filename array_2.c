/*	realizar un programa que permita cargar 10 numeros y determinar:
 	a) cuantos numeros pares se ingresaron
 	b) cuantos numeros impares se ingresaron
 	c) el mayor de ellos
 	d) el menor de ellos
 	e) promedio de numeros positivos
 	f) promedio de numeros negativos
*/
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string tab = 			"\n ::: ";
	string br = 			"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";
	int contador_par = 0;
	int contador_impar = 0;
	int contador_mayor = 0;
	int contador_menor = 0;
	int mayor =0;
	int menor = 9999;



	int v[10];
	for (int i = 0; i < 10; ++i) v[i]=0;
		
	for (int i = 0; i < 10; ++i) {
		cout << tab << "Ingrese un numero -> " ; 
		cin >> v[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		if ((v[i]%2) == 0) contador_par ++; else contador_impar ++;
		if (v[i]>mayor) mayor = v[i];
	}
	cout << tab << "La cantidad de ";
}