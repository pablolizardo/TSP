	/*Se cargan por teclado las edades de los n integrantes de un club de basketbol. Se pide:
a. Cuantos integrantes hay entre 7 y 10 años.
b. Cuantos integrantes hay entre 11 y 16 años
c. Cuantos integrantes hay entre 17 y 21 años
d. El promedio de edades en el club
e. El integrantes de mayor edad y el de menor edad
f. Si el integrante posee entre 7y10 años mostrar Grupo 1, si posee entre 11y16 años
mostrar Grupo 2, si posee entre 17y 21 años mostrar Grupo 3
g. Si el total de integrantes de cada grupo excede los 30, mostrar un mensaje “no hay
mas cupos.”
El fin de datos se indicará con la edad igual a 0 */

	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		string tab = 			"\n ║ ";
		string header =  	" ╓──────────────────────────────────────────────────────────────────────────────╖";
		string hr =   		"\n ╠══════════════════════════════════════════════════════════════════════════════╣";
		string br =  		" ║                                                                              ║";
		string footer =  	"\n ╙──────────────────────────────────────────────────────────────────────────────╜";
		int integrantes = 0;
		int edad = 0;
		int edades = 0;
		int entre7y10 = 0;
		int entre11y16 = 0;
		int entre17y20 = 0;

		cout << tab << "cuantos integrantes tiene el club?" ;
		cin >> integrantes;
		for (int i = 0; i < integrantes; ++i)
		{
			cout << "Ingrese la edad del integrante " << i+1;
			cin >> edad;
			edades +=edad;
			if (edad>=7  && edad<=10) entre7y10  ++;
			if (edad>=11 && edad<=16) entre11y16 ++;
			if (edad>=17 && edad<=20) entre17y20 ++;
		}
	}