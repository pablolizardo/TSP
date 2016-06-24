#include <cstdlib>
#include <iostream>
#define cls() system("clear")
using namespace std;
int main() {
	cls() ;
	int f, c , o=0;
	int aprobados , desaprobados = 0;
	cout << "Ingrese cantidad de alumnos -> ";
	cin >>f;
	int alumnos[f][5];
	for (int i = 0; i < f; ++i) {for (int j = 0; j < 5; ++j) {alumnos[i][j]=0; } }



	for (int i = 0; i < f; ++i) {
		cout << "Ingrese legajo -> ";
		cin >> alumnos[i][0];

		cout << "Ingrese curso -> ";
		cin >> alumnos[i][1];

		cout << "Ingrese turno -> ";
		cin >> alumnos[i][2];
		cout << "Ingrese nota -> ";
		cin >> alumnos[i][3];
		cout << "Ingrese edad -> ";
		cin >> alumnos[i][4];
	}
	//int alumnos [5][5];
	alumnos[][]= {
		{1001, 1, 1, 9, 15},
		{1002, 1, 1, 9, 15},
		{1003, 1, 1, 9, 15},
		{1004, 1, 1, 9, 15},
		{1005, 1, 1, 9, 15}
	};

	cout << "\t#\tCurso\tturno\tnota\tedad\t\n";
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << "\t" << alumnos[i][j] ;
		}
		cout << "\n";
	}
	cout << "\n\nMENU\n\n";
	cout << "1-Ingresar un curso y determinar la cantidad de alumnos aprobados y desaprobados.\n"; 
	cout << "2-Ingresar un determinado legajo y determinar si el mismo se encuentra registrado. Si se encuentra registrado mostrar todos sus datos.\n";
	cout << "3-Emitir un listado ordenado para cada curso. El listado deberá estar ordenado en forma decreciente según el promedio de los alumnos.";
	cout << "4-Emitir un listado, informando la cantidad de alumnos por turno..\n";
	cout << "5-Generar otra matriz en la que cada fila represente un turno y cada columna un curso. Cada componente de la matriz debe indicar la cantidad de alumnos por cada curso en cada turno.\n";

	cout << "Elija su opcion ->";
	cin >> o;
	int legajo=0;
	switch (o) {
		case 1:
			for (int i = 0; i < f; ++i) {
				if (alumnos[i][3]>=6) aprobados ++; 
				if (alumnos[i][3]<6) desaprobados ++; 
			}
			cout << "aprobados : " << aprobados << " desaprobados : " << desaprobados;
			break;
		case 2:
			cout << "Ingrese numero de legajo -> ";
			cin >> legajo;
			for (int i = 0; i < f; ++i) {
				if (alumnos[i][0]==legajo){
					cout << "\t#\tCurso\tturno\tnota\tedad\t\n";
					for (int j = 0; j < 5; ++j)
					{
						cout << "\t" << alumnos[i][j] ;
					}
				}
			}
			break;
	}	

	return 0;
}
