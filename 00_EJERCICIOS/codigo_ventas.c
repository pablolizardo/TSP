#include <cstdlib>
#include <iostream>

using namespace std;
int main(){ 
	int codigo = 0;
	int cantidad = 0;
	int costo_inicial = 0;
	int forma_de_pago = 0;
	int costo_final = 0;

	cout << "\n :::: 1 - Pendrive 16 GB $200 ";
	cout << "\n :::: 2 - Pendrive 32 GB $270 ";
	cout << "\n :::: 3 - Pendrive 8 GB $150 ";

	cout << "\n :::: Ingrese codigo del producto: ";
	cin >> codigo;

	cout << "\n :::: Ingrese cantidad vendida: ";
	cin >> cantidad;

	switch (codigo){
		case 1 : 
			costo_inicial = cantidad * 200;
			cout << "\n :::: 1 - Pendrive 16 GB $200.-";
			cout << "\n :::: Subtotal $" << costo_inicial << ".-";
			break;
		case 2 : 
			costo_inicial = cantidad * 270;
			cout << "\n :::: 2 - Pendrive 32 GB $270.-";
			cout << "\n :::: Subtotal $" << costo_inicial << ".-";
			break;
		case 3 : 
			costo_inicial = cantidad * 150;
			cout << "\n :::: 3 - Pendrive 8 GB $150.-";
			cout << "\n :::: \t \t Subtotal $" << costo_inicial << ".-";
			break;
		default :
			cout << "Seleccione una opcion valida";
			break;
	}
	cout << "\n \n";
	cout << "\n :::: Indique forma de pago: ";
	cout << "\n :::: 1 - Contado (3% descuento) ";
	cout << "\n :::: 2 - Tarjeta de credito (5% de recargo) ";
	cin >> forma_de_pago;

	switch (forma_de_pago){
		case 1 : 
			costo_final = costo_inicial -((costo_inicial*5)/100);
			cout << "\n :::: TOTAL con el 5% de Descuento: $" << costo_final << ".-";
			break;
		case 2 : 
			costo_final = costo_inicial +((costo_inicial*3)/100);
			cout << "\n :::: TOTAL con el 3% de Recargo: $" << costo_final << ".-";
			break;
		default :
			cout << "Seleccione una opcion valida";
			break;
	}
	
cout << "\n\n\n\n";
}