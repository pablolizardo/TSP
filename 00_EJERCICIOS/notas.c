#include <cstdlib>
#include <iostream>
using namespace std;
int main(){ 
	float nota = 0;
	float ca = 0;
	float cd = 0;
	cout << "::: Ingrese la nota:";
	cin >> nota;
	while (nota != 0) {
		if (nota > 4) {
			cout << "::: Aprobado \n\n";
			ca = ca +1;
		}
		else {
			cout << "::: Desaprobado \n\n";
			cd= cd +1;
		}		  
		cout << "::: Ingrese la nota:";
		cin >> nota;
	}

	cout << "\n\n\n\n::: Alumnos Aprobados : " << ca << "\n\n";
	cout << "::: Alumnos Desaprobados : " << cd << "\n\n";
	cout << "::: Gracias por ingreesar los datos. \n\n\n\n";
}