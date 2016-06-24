#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int cantidad_empleados = 0;
	int sueldo = 0;
	int sueldos = 0;
	int horas = 0;
	int importe_por_hora = 0;
	bool bam = false;
	int mayor = 0:
	int emnor = 0:

	cout << "\n ::: ingrese cantidad de empleados : ";
	cin >> cantidad_empleados ;

	cout << "\n ::: ingrese importe por hora : $";
	cin >> importe_por_hora ;

	for (int i = 0; i < cantidad_empleados; ++i)
	{
		if (bam == false) {
			mayor = 
		}
		cout << "\n ::: ingrese las horas trabajadas del empleado #" << i << " : ";
		cin >> horas;
		sueldo = horas * importe_por_hora;
		cout << "\n ::: El sueldo del empleado $" << i << " sera de : " << sueldo;
		cout << "\n\n\n";
		sueldos =sueldos + sueldo;
	}
	cout << "\n ::: La empresa debera pagar $" << sueldos << " en concepto de sueldos \n\n\n";
	return 0;
}

