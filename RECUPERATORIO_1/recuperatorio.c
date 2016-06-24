#include <cstdlib>
#include <iostream>
using namespace std;
int menu(){
		cout << "\n MENU : \n";
		cout << "1 - Registar Venta \n";
		cout << "2 - Total Ventas \n";
		cout << "3 - Listado de total de venta \n";
		cout << "4 - Busqueda y actualizacion de un articulo \n";
		cout << "0 - Salir \n";
		cout << "\n\n";
	}
int main(){
	system("clear");
	int f = 10;
	int y = 0;
	int c = 8;
	int i = 0;
	int j = 0;
	int sucursal =0;
	int aux=0;
	int venta =0;
	int total_s1=0;
	int total_s2=0;
	cout << "\n\n BIENVENIDOS AL SOFTWARE DE GESTION DE VENTAS \n\n";
	cout << "Ingrese la cantidad de articulos - > ";
	cin >> f;
	float m[f][8];
	// int m[10][8] = {
	// 	{101, 100, 1000, 0, 0, 0, 0,0},
	// 	{102, 50, 1000, 0, 0, 0, 0,0},
	// 	{103, 70.5, 1000, 0, 0, 0, 0,0},
	// 	{104, 100, 1000, 0, 0, 0, 0,0},
	// 	{105, 200, 1000, 0, 0, 0, 0,0},
	// 	{106, 300, 1000, 0, 0, 0, 0,0},
	// 	{107, 10, 1000, 0, 0, 0, 0,0},
	// 	{108, 80, 1000, 0, 0, 0, 0,0},
	// 	{109, 80, 1000, 0, 0, 0, 0,0},
	// 	{110, 23, 1000, 0, 0, 0, 0,0}
	// };
	for (int i = 0; i < f; ++i) {for (int j = 0; j < c; ++j) {m[i][j]=0; } }

	int codArt = 0;
	for (int i = 0; i < f; ++i)
	{
		cout << "Ingrese el codigo del articulo ->";
		cin >> codArt;
		m[i][0]=codArt+100;
		cout << "Ingrese el precio de venta -> $";
		cin >> m[i][1];
		cout << "Ingrese el stock -> ";
		cin >> m[i][2];
		cout << "\n::::::::::::::::::::::::::::::::::\n";

	}
	cout << "\n\n";
	cout << "\t#\t$\tSTK\tCS1\t$S1\tCS2\t$S2\tTOTAL\n";
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << "\t" << m[i][j];
		}
		cout << endl;
	}
	cout << "\n\n";
	
	menu();
	cout << "\n\n";

	int opcion = 0;
	int codigoArticulo = 0;
	cout << "Ingrese la opcion deseada -> ";
	cin >> opcion;
	while (opcion != 0) {
		switch (opcion) {
			case 1: 
				cout << "Ingrese el codigo del articulo -> ";
				cin >> codigoArticulo;
				
				for ( i = 0; i < f && m[i][0] != codigoArticulo; ++i);
				if (i==f) { 
					cout << "\n:/ > No se encontraron articulos con ese codigo\n"; 
				} else {
					cout << "\n:) > Se encontraron articulos con ese codigo\n"; 
					cout << "\n Ingrese el numero de la sucursal (1 o 2) -> ";
					cin >> sucursal;
					while (sucursal >2 || sucursal <=0)
					{
						cout << "\n Ingrese el numero de la sucursal (1 o 2) -> ";
						cin >> sucursal;
					}

					cout << "\n Ingrese la cantidad vendida (stock: " << m[i][2] << ") ->" ;
					cin >> venta;
					if (venta <= m[i][2]) {
						cout << ":) Hay stock disponible (" << m[i][2] << ") \n"; 
						m[i][2]-=venta;
						cout << ":) El stock actual del producto " << m[i][0] << " es " <<  m[i][2] << "\n"; 
						if(sucursal == 1){
							m[i][3]+=venta;
							m[i][4]+=(venta*m[i][1]);
						}
						if(sucursal == 2){
							m[i][5]+=venta;
							m[i][6]+=(venta*m[i][1]);
						}
						m[i][7]=m[i][6]+m[i][4];
					} else {
						cout << ":( No stock disponible (" << m[i][2] << ") \n"; 
					}
				}
				break;
			case 2 : 
				total_s1=0;
				total_s2=0;
				for (int i = 0; i < f; ++i)
				{
					total_s1 +=m [i][4];
					total_s2 +=m [i][6];
				}
				cout << "SUCURSAL 1: $" << total_s1 << "\n"; 
				cout << "SUCURSAL 2: $" << total_s2 << "\n"; 
				break;
			case 3 :
				aux = 0;
				for (int i = 0; i < f-1; ++i) {
					for (int j = i+1; j < f; ++j) {
						if (m[i][7]<m[j][7]) {
							for (int k = 0; k < c; ++k)
							{
								aux=m[i][k]; m[i][k]=m[j][k]; m[j][k]=aux;
							}
						}
					}
				}
				
				cout << "\t#\t$\tSTK\tCS1\t$S1\tCS2\t$S2\tTOTAL\n";
				for (int i = 0; i < f; ++i) {
					for (int j = 0; j < c; ++j)
					{
						cout << "\t" << m[i][j];
					}
					cout << endl;
				}
				break;
			case 4 :
				cout << "Ingrese el codigo del articulo -> ";
				cin >> codigoArticulo;
				for ( y = 0; y < f && m[y][0] != codigoArticulo; ++y);
				if (y==f) { 
					cout << "\n:/ > No se encontraron articulos con ese codigo\n"; 
				} else {
					cout << "\n:) > Se encontraron articulos con ese codigo\n"; 
					cout << "Ingrese el nuevo precio - > $" ;
					cin >> m[y][1];
					cout << "Ingrese el nuevo stock - > " ;
					cin >> m[y][2];
					cout << "Ingrese las cantidades vendidas en la sucursal 1 - > " ;
					cin >> m[y][3];
					cout << "Ingrese las cantidades vendidas en la sucursal 2 - > " ;
					cin >> m[y][5];
					cout << "\n :) Gracias! \n";
					m[y][4]= m[y][3]*m[y][1];
					m[y][6]= m[y][5]*m[y][1];
					m[y][7]= m[y][4]+m[y][6];
					cout << "\n Sus nuevos datos han sido cargados : \n";
					for (int i = 0; i < c; ++i)
					{
						cout << "\t" << m[y][i];
					}
				}
				break;
			default : break;
		}
	cout << "\n\n";

	menu();
	cout << "Ingrese la opcion deseada -> ";
	cin >> opcion;
	cout << "\n\n";

	}

	return 0;
}