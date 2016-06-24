	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		int cantAlumnos = 0;
		int asistAlumno = 0;
		int nota1 = 0;
		int nota2 = 0;
		string tab = "\n ::: ";

		cout << tab << "Ingrese la cantidad de alumnos : ";
		cin >> cantAlumnos;
		for (int i = 0; i < cantAlumnos; ++i)
		{
			cout << tab << "Ingrese el porcentaje de asistencia del alumno " << i+1 << " : ";
			cin >> asistAlumno;
			cout << tab << "Ingrese el Nota de primer parcial " << i+1 << " : ";
			cin >> nota1;
			cout << tab << "Ingrese el Nota del segundo parcial " << i+1 << " : ";
			cin >> nota2;
			if (asistAlumno >= 70 && nota1>=4 && nota2>= 4)
			{
				cout << tab << "El alumno "<<i +1<< " esta REGULAR";
			} else if (asistAlumno < 70 && nota1>=4 && nota2>= 4) {
				cout << tab << "El alumno "<<i +1<< " esta REGULAR";
			} else if (asistAlumno > 70 && nota1<4 || nota2<4) {
				cout << tab << "El alumno "<<i +1<< " esta REGULAR";
			}
		}

	}