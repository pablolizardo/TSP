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

		cout << header;
		cout << br;
		cout << tab << "cuantos integrantes tiene el club?: " ;
		cin >> integrantes;
		for (int i = 0; i < integrantes; ++i)
		{
			cout << tab << "Ingrese la edad del integrante #" << i+1 << " : ";
			cin >> edad;
			edades +=edad;
			if (edad>=7  && edad<=10) entre7y10  ++;
			if (edad>=11 && edad<=16) entre11y16 ++;
			if (edad>=17 && edad<=20) entre17y20 ++;
		}
		cout << tab << "el promedio de edad del club es de " << edades /integrantes;
		cout << tab << "El grupo 1 (7 y 10 años) posee " << entre7y10 << " integrantes";
		cout << tab << "El grupo 2 (11 y 16 años) posee " << entre11y16 << " integrantes";
		cout << tab << "El grupo 3 (17 y 20 años) posee " << entre17y20 << " integrantes";

		if (entre7y10>30) cout << tab << "El cupo del grupo 1 esta lleno ya que superaron los 30 integrantes (" << entre7y10 << ")";
		if (entre11y16>30) cout << tab << "El cupo del grupo 2 esta lleno ya que superaron los 30 integrantes (" << entre7y10 << ")";
		if (entre17y20>30) cout << tab << "El cupo del grupo  3esta lleno ya que superaron los 30 integrantes (" << entre7y10 << ")";
		cout << br;
		cout << footer;
	}