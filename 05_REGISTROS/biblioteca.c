#include <cstdlib>
#include <iostream>
using namespace std;
struct libro {
	int id;
	int cantidad;
	int idioma;
	int tema;
};
int menu(){
			cout << "\n MENU : \n";
			cout << "1 - prestamo \n";
			cout << "2 - devolucion \n";
			cout << "3 - listado decreciente por cantidad por materia \n";
			cout << "4 - actualizar datos \n";
			cout << "5 - eliminar \n";
			cout << "0 - Salir \n";
			cout << "\n\n";
		}
int main() {
	cout << ":::::: BIBIOTECA ::::::\n";
	int n = 10;
	libro l[n];
	l[0].id = 551; l[0].cantidad = 30; 	l[0].idioma = 3; l[0].tema = 2;
	l[1].id = 552; l[1].cantidad = 79; 	l[1].idioma = 1; l[1].tema = 1;
	l[2].id = 553; l[2].cantidad = 30;  l[2].idioma = 3; l[2].tema = 2;
	l[3].id = 554; l[3].cantidad = 50; 	l[3].idioma = 2; l[3].tema = 1;
	l[4].id = 555; l[4].cantidad = 22; 	l[4].idioma = 2; l[4].tema = 1;
	l[5].id = 556; l[5].cantidad = 35; 	l[5].idioma = 3; l[5].tema = 2;
	l[6].id = 557; l[6].cantidad = 88; 	l[6].idioma = 2; l[6].tema = 2;
	l[7].id = 558; l[7].cantidad = 39; 	l[7].idioma = 1; l[7].tema = 1;
	l[8].id = 559; l[8].cantidad = 20;  l[8].idioma = 3; l[8].tema = 1;
	l[9].id = 560; l[9].cantidad = 10; 	l[9].idioma = 1; l[9].tema = 2;

	cout << "::: LIBROS DISPONIBLES :::\n";
	
	cout << "#\tcantidad\tidioma \ttema\n";
	for (int i = 0; i < n; ++i)
	{
		cout << l[i].id<<"\t"<<l[i].cantidad<<"\t\t"<<l[i].idioma <<"\t"<<l[i].tema <<"\n";
	}
	
	int codigo_prestamo = 0;
	//int i = 0;
	int i = 0;
	// meter esto en el main () 
	menu();
		cout << "\n\n";
		int opcion = 0;
		cout << "Ingrese la opcion deseada -> ";
		cin >> opcion;
		while (opcion != 0) {
			switch (opcion) {
				case 1: 
					cout << "Ingrese codigo del libro->";
					cin >> codigo_prestamo;
					cout << "#\tcantidad\tidioma \ttema\n";
					for (i = 0; i < n && l[i].id!=codigo_prestamo; ++i);
					if (i==n){
						cout << "No hay libros con ese codigo guachin.";
					}else {
						cout << l[i].id<<"\t"<<l[i].cantidad<<"\t\t"<<l[i].idioma <<"\t"<<l[i].tema <<"\n";
					}

					break;
				case 2 : 
					// instrucciones
					break;
				case 3 :
					// instrucciones
					break;
				case 4 :
					// instrucciones
					break;
				default : break;
			}
		cout << "\n\n";
		menu();
		cout << "Ingrese la opcion deseada -> ";
		cin >> opcion;
		cout << "\n\n";
		}
		

}


