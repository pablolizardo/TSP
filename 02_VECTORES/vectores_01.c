/* 
Cargar un vector con las n edades de un curso. Determinar el promedio y cuántos alumnos tienen
20 años, más de 20 años y menos de 20 años.
*/
	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		system("clear");
		string tab = 			"\n ::: ";
		string br = 			"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";

		int cantidadAlumnos = 0;
		int respuestas[4]; // menores [0], iguales [1] ,  mayores[2] , promedio[3]

		for (int i = 0; i < 4; ++i) respuestas[i] = 0;

		cout << tab << "Ingrese la cantidad de alumnos -> ";
		cin >> cantidadAlumnos ;

		int edades[cantidadAlumnos]; 


		for (int i = 0; i < cantidadAlumnos; ++i) edades[i] = 0;

		for (int i = 0; i < cantidadAlumnos; ++i)
		{
			cout << tab << "Ingrese la edad del alumno " << i << " -> ";
			cin >> edades[i];
		}
		
		cout << tab << br << tab ;

		for (int i = 0; i < cantidadAlumnos; ++i)
		{
			cout << tab << "La edad del alumno " << i << " es " << edades[i];

			suma += edades[i];

			if (edades[i] < 20) respuestas[0]+=1; 
			if (edades[i] == 20) respuestas[1]+=1; 
			if (edades[i] > 20) respuestas[2]+=1; 
		}

		cout << tab << br << tab ;

		// menores [0], iguales [1] ,  mayores[2] , promedio[3]
		cout << tab << "Hay " << respuestas[0] << " menores de 20 años.";
		cout << tab << "Hay " << respuestas[1] << " de 20 años.";
		cout << tab << "Hay " << respuestas[2] << " mayores de 20 años.";
		cout << tab ;
		cout << tab << "El promedio de edad del curso es de " << respuestas[3]/cantidadAlumnos;

		cout << br;
		cout << br;
	}