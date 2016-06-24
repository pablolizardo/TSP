#include <cstdlib>
#include <iostream>
using namespace std;
struct objs {
	int legajo;
	char apellido[10];
	int categoria;
	int turno;
	float sueldo;
};

int menu(){
	//system("clear");
		cout << "\n MENU : \n";
		cout << "1 - Datos del empleado que gana el mayor sueldo. \n";
		cout << "2 - total de sueldos pagados en cada categoría \n";
		cout << "3 - cantidad de empleados en cada categoría \n";
		cout << "4 - cantidad de clientes de la categoría 1 que cobren más de $3000. \n";
		cout << "5 - Buscar un empleado por su legajo y permitir actualizar todos sus datos. \n";
		cout << "6 - Matriz de Acumulación, cada fila representa una categoría, cada columna un turno. Los componentes de la matriz representan el monto de sueldos abonados por categoría y turno. \n";
		cout << "0 - Salir \n";
		cout << "\n\n";
	}
int main() {
	int n = 0;
	int mayor = 0; int menor = 999999;
	int opcion = 0;
	int omayor = 0;
	float sueldos_cat1 =0;
	float sueldos_cat2 =0;
	float sueldos_cat3 =0;
	int empleados_cat1 = 0;
	int empleados_cat2 = 0;
	int empleados_cat3 = 0;
	cout << "Ingrese la candidad de objs que posee ->" ;
	//cin >> n;
	// LLENAR CON DATOS
	// ANULAR LUEGO DE DEBUG
	//for (int i = 0; i < n; ++i) o[i].apellido="";
	n = 5;
	objs o[n];
	o[0].legajo=1000; o[0].categoria=1; o[0].turno=1; o[0].sueldo=21000;
	o[1].legajo=1001; o[1].categoria=3; o[1].turno=2; o[1].sueldo=27000.3;
	o[2].legajo=1002; o[2].categoria=1; o[2].turno=2; o[2].sueldo=33000;
	o[3].legajo=1003; o[3].categoria=2; o[3].turno=1; o[3].sueldo=25000.4;
	o[4].legajo=1004; o[4].categoria=2; o[4].turno=3; o[4].sueldo=15000;
	// ANULAR LUEGO DE DEBUG


	// for (int i = 0; i < n; ++i)
	// {
	// 	o[i].legajo = 1000+i;
	// 	cout << "Ingrese el apellido del o #"<< i <<" ->" ;
	// 	cin >> o[i].apellido;
	// 	cout << "Ingrese la categoria del o #"<< i <<" ->" ;
	// 	cin >> o[i].categoria;
	// 	cout << "Ingrese el turno del o #"<< i <<" ->" ;
	// 	cin >> o[i].turno;
	// 	cout << "Ingrese el sueldo del o #"<< i <<" ->" ;
	// 	cin >> o[i].sueldo;
	// }

								cout << "\n\n#\tNombre\t\tCat.\tTurn.\tSueldo\n";
	for (int i = 0; i < n; ++i) cout << o[i].legajo<<"\t"<<o[i].apellido<<"\t\t"<<o[i].categoria<<"\t"<<o[i].turno<<"\t"<<o[i].sueldo << "\n";

	for (int i = 0; i < n; ++i) 
		if (o[i].sueldo > mayor) {
			mayor = o[i].sueldo;
			omayor = i;
		}; // mayor
	for (int i = 0; i < n; ++i)
	{
		if (o[i].categoria==1) sueldos_cat1 += o[i].sueldo; 
		if (o[i].categoria==2) sueldos_cat2 += o[i].sueldo; 
		if (o[i].categoria==3) sueldos_cat3 += o[i].sueldo; 

		if (o[i].categoria==1) empleados_cat1++; 
		if (o[i].categoria==2) empleados_cat2++; 
		if (o[i].categoria==3) empleados_cat3++; 
	}
	menu();
	cout << "\n\n";
	cout << "Ingrese la opcion deseada -> ";
	cin >> opcion;
	while (opcion != 0) {
		switch (opcion) {
			case 1: 
				cout << "\n\n#\tNombre\t\tCat.\tTurn.\tSueldo\n";
				cout << o[omayor].legajo<<"\t"<<o[omayor].apellido<<"\t\t"<<o[omayor].turno<<"\t"<<o[omayor].turno<<"\t"<<o[omayor].sueldo << "\n";
				break;
			case 2 : 
				cout << "En la categoria 1 se pagaron $" << sueldos_cat1 << "\n";
				cout << "En la categoria 2 se pagaron $" << sueldos_cat2 << "\n";
				cout << "En la categoria 3 se pagaron $" << sueldos_cat3 << "\n";
				break;
			case 3 :
				cout << "En la categoria 1 hay empleados: " << empleados_cat1 << "\n";
				cout << "En la categoria 2 hay empleados: " << empleados_cat2 << "\n";
				cout << "En la categoria 3 hay empleados: " << empleados_cat3 << "\n";
				break;
			case 4 :
				// instrucciones
				break;
			default : break;
		}
	cout << "\n\n";
	menu();
	cout << "Ingrese la opcion deseada -> ";
	cin >> opcion;
	cout << "\n\n";
	}

}


