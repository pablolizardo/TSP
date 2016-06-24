#include <cstdlib>
#include <iostream>

using namespace std;
int main(){ 
	//int costo_por_persona = 0;
	int destino = 0;
	int peso = 0;
	int costo = 0;

	cout << "::: Buenos dias\n" ;
	cout << "::: Ingrese Peso de su encomienda\n" ;
	cin >> peso;

	cout << "::: Ingrese el destino de su encomienda\n" ;
	cout << "::: 1 - Buenos aires\n" ;
	cout << "::: 2 - Cordoba\n" ;
	cout << "::: 3 - Tucuman\n" ;
	cin >> destino;

	if (peso <= 5)
	{
		switch (destino) {
			case 1 :
				costo = 500;
				break;
			case 2 :
				costo = 600;
				break;
			case 3 :
				costo = 700;
				break;
			default :
				break;
		}
	} else if (peso >5 && peso<10) {
		switch (destino) {
			case 1 :
				costo = 580;
				break;
			case 2 :
				costo = 650;
				break;
			case 3 :
				costo = 780;
				break;
			default :
				break;
		}
	} else if (peso >=10 && peso<20) {
		switch (destino) {
			case 1 :
				costo = 650;
				break;
			case 2 :
				costo = 750;
				break;
			case 3 :
				costo = 850;
				break;
			default :
			
				break;
		}
	}
	cout << "::: El Costo de su encomienda es de $" << costo << ".- \n\n";
}

