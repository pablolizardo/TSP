#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int dia = 1;
	cout << string(100, '\n');
	
	cout << "Ingrese el numero del dia \n";
	cin >> dia;
	
	switch (dia) {
		case 1 : 
			cout << "Lunes";
			break;
		case 2 : 
			cout << "Martes";
			break;
		case 3 : 
			cout << "Miercoles";
			break;
		case 4 : 
			cout << "jueves";
			break;
		case 5 : 
			cout << "viernes";
			break;
		case 6 : 
			cout << "Sabado";
			break;
		case 7 : 
			cout << "Dormingo";
			break;
		default :
			cout << "Seleccione una opcion valida";
			break;
	}
	cout << "\n";

}

