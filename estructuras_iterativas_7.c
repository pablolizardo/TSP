/* Un videoclub, recibió nuevas películas para alquilar a las cuales les asignó el siguiente código:
7001:		Ira de Titanes		Precio Alquiler: $ 20
7002:		Infierno Blanco		Precio Alquiler: $ 20
7003:		Madagascar 3		Precio Alquiler: $ 20

El dueño necesita información respecto a los alquileres de estas películas estreno. Se pide desarrollar un programa que permita ingresar los códigos de las películas alquiladas y determinar:
	a) cuántas veces se alquiló cada una de estas películas.
	b) Cuál fue la película que más se alquiló y la recaudación obtenida
	c) Cuál fue la película que menos se alquiló y la recaudación obtenida
	El programa debe finalizar cuando se ingrese el código 0. */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string tab = 			"\n ║ ";
	string header =  	"\n ╓──────────────────────────────────────────────────────────────────────────────╖";
	string hr =   		"\n ╠══════════════════════════════════════════════════════════════════════════════╣";
	string br =  		"\n ║                                                                              ║";
	string footer =  	"\n ╙──────────────────────────────────────────────────────────────────────────────╜";
	int codigoPelicula = 0;
	int pelicula_7001 = 0;
	int pelicula_7002 = 0;
	int pelicula_7003 = 0;

	cout << header;
	cout << tab << "7001:		Ira de Titanes		Precio Alquiler: $ 20 : ";
	cout << tab << "7002:		Infierno Blanco		Precio Alquiler: $ 20 : ";
	cout << tab << "7003:		Madagascar 3		Precio Alquiler: $ 20 : ";
	cout << br;
	cout << tab << "Ingrese por favor el codigo de la pelicula : ";
	cin >> codigoPelicula;
	cout << br;
	cout << hr;
	while(codigoPelicula!=0) {
	    switch (codigoPelicula) {
	    	case 7001 : pelicula_7001++; break;
	    	case 7002 : pelicula_7002++; break;
	    	case 7003 : pelicula_7003++; break;
	    	default : break;
	    }

	//cout << hr;

	    cout << tab << "7001:		Ira de Titanes		Precio Alquiler: $ 20 : ";
		cout << tab << "7002:		Infierno Blanco		Precio Alquiler: $ 20 : ";
		cout << tab << "7003:		Madagascar 3		Precio Alquiler: $ 20 : ";
		cout << br;
		cout << tab << "Ingrese por favor el codigo de la pelicula : ";
		cin >> codigoPelicula;
		cout << br;
		cout << hr;
	} // fin while
	cout << tab << "La pelicula Ira de Titanes (7001) fue alquilada " << pelicula_7001 << " veces.";
	cout << tab << "Generando una recaudacion de $" << pelicula_7001*20 << ".-";

	cout << tab << "Infierno Blanco (7002) fue alquilada " << pelicula_7002 << " veces.";
	cout << tab << "Generando una recaudacion de $" << pelicula_7002*20 << ".-";

	cout << tab << "Madagascar 3 (7003) fue alquilada " << pelicula_7003 << " veces.";
	cout << tab << "Generando una recaudacion de $" << pelicula_7003*20 << ".-";
    
    //cout << hr;
cout << br;
   cout << hr;
cout << br;
    if (pelicula_7001 >= pelicula_7002 && pelicula_7001 >= pelicula_7003) cout << tab << "La pelicula mas alquilada es la 7001: Ira de Titanes. Y Recaudo : $" << pelicula_7001*20 << ".-" ;
    if (pelicula_7002 >= pelicula_7001 && pelicula_7002 >= pelicula_7003) cout << tab << "La pelicula mas alquilada es la 7002: Infierno Blanco. Y Recaudo : $" << pelicula_7002*20 << ".-" ;
    if (pelicula_7003 >= pelicula_7002 && pelicula_7003 >= pelicula_7001) cout << tab << "La pelicula mas alquilada es la 7003: Madagascar 3. Y Recaudo : $" << pelicula_7003*20 << ".-" ;


   cout << br;
   cout << hr;

    if (pelicula_7001 <= pelicula_7002 && pelicula_7001 <= pelicula_7003) cout << tab << "La pelicula menos alquilada es la 7001: Ira de Titanes. Y Recaudo : $" << pelicula_7001*20 << ".-" ;
    
   cout << br;
   cout << hr;
    if (pelicula_7002 <= pelicula_7001 && pelicula_7002 <= pelicula_7003) cout << tab << "La pelicula menos alquilada es la 7002: Infierno Blanco. Y Recaudo : $" << pelicula_7002*20 << ".-" ;
   cout << br;
   cout << hr;
    if (pelicula_7003 <= pelicula_7002 && pelicula_7003 <= pelicula_7001) cout << tab << "La pelicula menos alquilada es la 7003: Madagascar 3. Y Recaudo : $" << pelicula_7003*20 << ".-" ;
    
   cout << br;
    cout << footer	;
}