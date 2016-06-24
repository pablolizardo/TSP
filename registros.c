#include <cstdlib>
#include <iostream>
using namespace std;

struct alumno{
	int legajo;
	float nota1;
	float nota2;
	int asistencia;
	char nombre[20];
};

int main() {
	int f=0;
	alumno a;
	//cout << "Cantidad de alumnos -> ";
	//cin >>f;
	//for (int i = 0; i < f; ++i) {
		cout << "Ingrese legajo->";
		cin >> a.legajo;
		cout << "Ingrese nota 1->";
		cin >> a.nota1;
		cout << "Ingrese nota 2->";
		cin >> a.nota2;
		cout << "Ingrese asistencia->";
		cin >> a.asistencia;
		cout << "Ingrese nombre->";
		cin >> a.nombre;
	//}
	cout << "#\tnota1\tnota2\tasist\tnombre\n";
	cout << a.legajo<<"\t"<<a.nota1<<"\t"<<a.nota2<<"\t"<<a.asistencia<<"\t"<<a.nombre<<"\n";

	cout << "El promedio de notas del alumno es de " << (a.nota1+a.nota2)/2;
}