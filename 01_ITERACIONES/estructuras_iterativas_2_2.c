/*En una fábrica en el proceso de fabricación, por cada tipo de artículo se obtienen un cierto
número de piezas sin defectos y un cierto número de piezas falladas. Realizar un programa
que, cargando el código del artículo, la cantidad de piezas sin fallas y la cantidad de piezas
con fallas , determine:
a. La producción total de cada tipo de artículo (piezas falladas + piezas sin fallas).
b. Cuál es el artículo con más falla de producción.
c. Si la cantidad de productos fallados de un artículo es mayor que la cantidad de piezas
sin fallas del mismo, mostrar un mensaje indicando que “Debe revisarse el proceso de
producción”.
d. El promedio de fallas por producto.
El fin de datos se indicará con el código de artículo igual a 0 */
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
	int codigoArticulo = 0;
	int piezasFalladas = 0;
	int piezasOk = 0;
	int articulo = 0;
	int menor = 9999999;
	int mayor = 0;
	int productoMasFallado = 0;
	int productoMasOk = 0;

	cout << header << br ;

	cout << tab << "Ingrese por favor el codigo del articulo: ";
	cin >> codigoArticulo;

	while(codigoArticulo != 0) {
			// articulo = codigoArticulo;
			articulo ++ ;
			cout << tab << "Ingrese por favor la cantidad de piezas no falladas del articulo: ";
			cin >> piezasOk;
		    cout << tab << "Ingrese por favor la cantidad de piezas falladas del articulo: ";
			cin >> piezasFalladas;
			if (piezasFalladas > piezasOk) cout << tab << "Por favor revise el plan de produccion ya que las fallas son muchas."  ;
			if (piezasFalladas >= mayor ) {
				mayor = piezasFalladas;
				productoMasFallado = codigoArticulo;
			}
			if (piezasOk <= menor ) {
				menor = piezasOk;
				productoMasOk = codigoArticulo;
			}
		    cout << tab << "Ingrese por favor el codigo del articulo: ";
			cin >> codigoArticulo;
		}	
	for (int i = 0; i < articulo; ++i)
	{
		cout << tab << "El articulo " << i+1 << " tuvo " << piezasFalladas << " piezas falladas y " << piezasOk << " piezas sin fallas.";
	}
	cout << tab << "El articulo con mas fallas fue el " << productoMasFallado << " con " << mayor << " de Piezas falladas.";
	cout << tab << "El articulo con menos fallas fue el " << productoMasOk << " con " << menor << " de Piezas sin fallas.";
	cout << br ;
	cout << footer ;

}