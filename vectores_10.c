#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int n = 0;
	cout << "Ingrese la cantidad de empleados ->\t";
	cin >> n;
	int legajos[n];
	int horas[n];
	float prom=0;
	int menor = 9999;
	int mayor=0;
	for (int i = 0; i < n; ++i) legajos[i]=horas[i]=0; 
	for (int i = 0; i < n; ++i)
	{
		cout << "Ingrese el numero de legajo ->\t";
		cin >> legajos[i];
		cout << "Ingrese las horas trabajadas del empleado legajo #" << legajos[i] << " ->\t";
		cin >> horas[i];
		prom+=horas[i];
	}
	prom/=n;
	cout << "Promedio de horas trabajadas " << prom << "\n";
	cout << "Empleados que trabajaron mas horas que el promedio\n";
	for (int i = 0; i < n; ++i) {
	 	if (horas[i]>=prom) {
	 		cout << "El legajo #" << legajos[i] << " trabajo " << horas[i] << "hs\n";
	 	}
	}


	return 0;
}