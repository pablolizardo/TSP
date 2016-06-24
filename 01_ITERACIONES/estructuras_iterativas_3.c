#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	int ventas = 0;
	int importe = 0;
	int cantidad_ventas = 0;
	bool bam = true; 

	cout << "\n ::: Ingresar importe : $";
	cin >> importe;
	while(importe!=0) {
		cantidad_ventas ++;
	    cout << "\n ::: Ingresar importe : $";
		cin >> importe;
		ventas += importe;
	}
	cout << "\n ::: Las ventas del dia fueron de : $" << ventas << ".-";
	cout << "\n ::: El promedio de ventas fue de : $" << ventas/cantidad_ventas << ".-";
	cout << "\n\n\n";
}