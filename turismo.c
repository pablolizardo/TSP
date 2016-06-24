#include <cstdlib>
#include <iostream>

using namespace std;
int main(){ 
	//int costo_por_persona = 0;
	int cantidad_curso_1 = 0;
	int cantidad_curso_2 = 0;
	int cantidad_curso_3 = 0;
	int costo_curso_1 = 0;
	int costo_curso_2 = 0;
	int costo_curso_3 = 0;
	string mayor = "";

	cout << "\n :::: Ingrese Cantidad de alumnos en Curso #1: ";
	cin >> cantidad_curso_1;
	cout << "\n :::: Ingrese Cantidad de alumnos en Curso #2: ";
	cin >> cantidad_curso_2;
	cout << "\n :::: Ingrese Cantidad de alumnos en Curso #3: ";
	cin >> cantidad_curso_3;

	if (cantidad_curso_1 > 40) {
		costo_curso_1 = cantidad_curso_1*10000;
		costo_curso_1 = costo_curso_1 - (costo_curso_1*5)/100;
	} else {
		costo_curso_1 = cantidad_curso_1*10000;
	}
	if (cantidad_curso_2 > 40) {
		costo_curso_2 = cantidad_curso_2*10000;
		costo_curso_2 = costo_curso_2 - (costo_curso_2*5)/100;
	} else {
		costo_curso_2 = cantidad_curso_2*10000;
	}
	if (cantidad_curso_3 > 40) {
		costo_curso_3 = cantidad_curso_3*10000;
		costo_curso_3 = costo_curso_3 - (costo_curso_3*5)/100;
	} else {
		costo_curso_3 = cantidad_curso_3*10000;
	}

	if(cantidad_curso_1 > cantidad_curso_2 && cantidad_curso_1 > cantidad_curso_3){
		mayor = "Curso 1" +  cantidad_curso_1;
    }else{
        if(cantidad_curso_2 > cantidad_curso_1 && cantidad_curso_2 > cantidad_curso_3){
			mayor = "Curso 2" + cantidad_curso_2;
        }else{
			mayor = "Curso 3" + cantidad_curso_3;
        }
    }
		
		
		cout << "\n\n\n :::: El Curso mas numeroso es el : " << mayor ;
		cout << "\n\n\n " ;
		cout << "\n :::: El Curso 1 debera pagar : $" << costo_curso_1;
		cout << "\n :::: El Curso 2 debera pagar : $" << costo_curso_2;
		cout << "\n :::: El Curso 3 debera pagar : $" << costo_curso_3;
cout << "\n\n\n\n";
return 0;
}