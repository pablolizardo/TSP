
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	// INICIALIZACION DE VARIABLES Y PROGRAMA
	system("clear");
	string tab = 			"\n ::: ";
	string br = 			"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";
	int n = 0;
	system("clear");
	cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
	cout << tab << "CANTIDAD DE ARTICULOS DISPONIBLES -> " ;		
	cin >> n;
	int s1_articulo[n]; int s1_stock[n]; int s1_venta[n];
	int s2_articulo[n]; int s2_stock[n]; int s2_venta[n];
	int s3_articulo[n]; int s3_stock[n]; int s3_venta[n];
	int sucursal = 0; int venta = 0; int codigo = 0; int stock = 0;

	for (int i = 0; i < n; ++i) {
		s1_articulo[i]=0; s1_stock[i]=0; s1_venta[i]=0;
		s2_articulo[i]=0; s2_stock[i]=0; s2_venta[i]=0;
		s3_articulo[i]=0; s3_stock[i]=0; s3_venta[i]=0;
	}

	// INICIO DE LA CARGA DE STOCK
	system("clear");
	cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
	cout << tab << "STOCK DISPONIBLE DE LA SUCURSAL 1 " << "\n";	
	for (int i = 0; i < n; ++i) {
		cout << tab << "Stock Articulo #" << i+1 << " -> ";
		cin >> s1_stock[i];
	}
	system("clear");
	cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
	cout << tab << "STOCK DISPONIBLE DE LA SUCURSAL 2 " << "\n";
	for (int i = 0; i < n; ++i) {
		cout << tab << "Stock Articulo #" << i+1 << " -> ";
		cin >> s2_stock[i];
	}
	system("clear");
	cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
	cout << tab << "STOCK DISPONIBLE DE LA SUCURSAL 3 " << "\n";
	for (int i = 0; i < n; ++i) {
		cout << tab << "Stock Articulo #" << i +1<< " -> ";
		cin >> s3_stock[i];
	}

	// FIN DE LA CARGA DE STOCK
	system("clear");
	cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
	cout << tab << "DATOS CARGADOS " << "\n";
		cout << br << tab << "ARTICULO  ||  SUCURSAL 1  ||  SUCURSAL 2  ||  SUCURSAL 3   ||  TOTALES" ;
	for (int i = 0; i < n; ++i) {
		cout << tab 	  << i+1 << "         ||     "<< s1_stock[i] << "       ||     "<< s2_stock[i] << "       ||     "<< s3_stock[i] << "   ||  " << s1_stock[i]+s2_stock[i]+s3_stock[i];
	}
	cout << br << "\n\n\n" ;

	// INICIO DE LA CARGA DE VENTAS
	string respuesta ="";
	cout << tab << "Desea continuar ingresando las ventas? (S/N) -> " ;
	cin >> respuesta;
	while (respuesta == "s" || respuesta == "S" ) {
		system("clear");
		cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
		cout << tab << "VENTAS" << "\n";
		cout << tab << "Ingrese el numero de la sucursal (1,2,3) -> " ;
		cin >> sucursal;
		switch (sucursal) {
			case 1 : 
				cout << tab << "Ingrese el codigo del articulo -> " ;
				cin >> codigo;
				codigo--;
				cout << tab << "Ingrese la cantidad vendida -> " ;
				cin >> venta;
				if (s1_stock[codigo]>venta) {
					s1_venta[codigo]=s1_venta[codigo]+venta; 
					cout << tab << "VENTA REALIZADA. QUEDO EN STOCK "<<  s1_stock[codigo]-s1_venta[codigo]; 
				} else {
					cout << tab << "No se puede vender mas de la cantidad disponible ( " << s1_stock[codigo] << " )" ;
				}
				break;
			case 2 : 
				cout << tab << "Ingrese el codigo del articulo -> " ;
				cin >> codigo;
				codigo--;
				cout << tab << "Ingrese la cantidad vendida -> " ;
				cin >> venta;
				if (s2_stock[codigo]>venta) {
					s2_venta[codigo]=s2_venta[codigo]+venta; 
					cout << tab << "VENTA REALIZADA. QUEDO EN STOCK "<<  s2_stock[codigo]-s2_venta[codigo]; 
				} else {
					cout << tab << "No se puede vender mas de la cantidad disponible ( " << s2_stock[codigo] << " )" ;
				}
				break;
			case 3 : 
				cout << tab << "Ingrese el codigo del articulo -> " ;
				cin >> codigo;
				codigo--;
				cout << tab << "Ingrese la cantidad vendida -> " ;
				cin >> venta;
				if (s3_stock[codigo]>venta) {
					s3_venta[codigo]=s3_venta[codigo]+venta; 
					cout << tab << "VENTA REALIZADA. QUEDO EN STOCK "<<  s3_stock[codigo]-s3_venta[codigo]; 
				} else {
					cout << tab << "No se puede vender mas de la cantidad disponible ( " << s3_stock[codigo] << " )" ;
				}
				break;
			case 0 : 
				break;
		}
		cout << tab << "Desea continuar ingresando las ventas? (S/N) -> " ;
		cin >> respuesta;
	} 

	// INICIO DE MENU
	system("clear");
	cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
	cout << tab << "ELIJA SU OPCION: " << "\n";
	cout << tab << "1 : Consultar Stock";
	cout << tab << "2 : Consultar Ventas";
	cout << tab << "3 : Modificar Articulo";
	cout << tab << "4 : Consultar disponibilidad de articulo en sucursal";
	cout << tab << "5 : Promedio de ventas por articulo";
	cout << tab << "6 : Listado de ventas y existencias por sucursal";
	cout << tab << "7 : Sucursal que registra menos existencia de articulos";
	cout << tab << "8 : Promedio de ventas \n";
	cout << tab << "0 : Salir" << "\n";
	int menu = 0;
	cin >> menu;
	while (menu!=0){
		switch (menu){
			case 1:
				system("clear");
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "STOCK DISPONIBLE " << "\n";
					cout << br << tab << "ARTICULO  ||  SUCURSAL 1  ||  SUCURSAL 2  ||  SUCURSAL 3   ||  TOTALES" ;
				for (int i = 0; i < n; ++i) {
					cout << tab 	  << i+1<< "         ||     "<< s1_stock[i]-s1_venta[i] << "       ||     "<< s2_stock[i]-s2_venta[i] << "       ||     "<< s3_stock[i]-s3_venta[i] << "   ||  " << (s1_stock[i]-s1_venta[i])+(s2_stock[i]-s2_venta[i])+(s3_stock[i]-s3_venta[i]);
				}
				cout << br << "\n\n\n" ;
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "ELIJA SU OPCION: " << "\n";
				cout << tab << "-> 1 : Consultar Stock";
				cout << tab << "2 : Consultar Ventas";
				cout << tab << "3 : Modificar Articulo";
				cout << tab << "4 : Consultar disponibilidad de articulo en sucursal";
				cout << tab << "5 : Promedio de ventas por articulo";
				cout << tab << "6 : Listado de ventas y existencias por sucursal";
				cout << tab << "7 : Sucursal que registra menos existencia de articulos";
				cout << tab << "8 : Promedio de ventas \n";
				cout << tab << "0 : Salir" << "\n";
				cin >> menu;
				break;
			case 2:
				system("clear");
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "VENTAS" << "\n";
					cout << br << tab << "ARTICULO  ||  SUCURSAL 1  ||  SUCURSAL 2  ||  SUCURSAL 3   ||  TOTALES" ;
				for (int i = 0; i < n; ++i) {
					cout << tab 	  << i+1<< "         ||     "<< s1_venta[i] << "       ||     "<< s2_venta[i] << "       ||     "<< s3_venta[i] << "   ||  " << s1_venta[i]+s2_venta[i]+s3_venta[i];
				}
				cout << br << "\n\n\n" ;
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "ELIJA SU OPCION: " << "\n";
				cout << tab << "1 : Consultar Stock";
				cout << tab << "-> 2 : Consultar Ventas";
				cout << tab << "3 : Modificar Articulo";
				cout << tab << "4 : Consultar disponibilidad de articulo en sucursal";
				cout << tab << "5 : Promedio de ventas por articulo";
				cout << tab << "6 : Listado de ventas y existencias por sucursal";
				cout << tab << "7 : Sucursal que registra menos existencia de articulos";
				cout << tab << "8 : Promedio de ventas \n";
				cout << tab << "0 : Salir" << "\n";
				cin >> menu;
				break;
			case 3:
				system("clear");
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "MODIFICACION DE ARTICULO" << "\n";
				
				cout << tab << "Ingrese por favor el numero de sucursal -> ";
				cin >> sucursal;

				cout << tab << "Ingrese por favor el codigo del articulo a modificar -> ";
				cin >> codigo;
				codigo --;
				
				switch (sucursal) {
					case 1: 
						cout << tab << "Actualmente hay " << s1_stock[codigo]-s1_venta[codigo] << " en stock";
						cout << tab << "Ingrese el nuevo stock disponible -> ";
						cin >> stock;
						s1_stock[codigo]+=stock;
						cout << tab << "STOCK ACTUALIZADO";
						break;
					case 2: 
						cout << tab << "Actualmente hay " << s2_stock[codigo]-s2_venta[codigo] << " en stock";
						cout << tab << "Ingrese el nuevo stock disponible -> ";
						cin >> stock;
						s2_stock[codigo]+=stock;
						cout << tab << "STOCK ACTUALIZADO";
						break;
					case 3: 
						cout << tab << "Actualmente hay " << s3_stock[codigo]-s3_venta[codigo] << " en stock";
						cout << tab << "Ingrese el nuevo stock disponible -> ";
						cin >> stock;
						s3_stock[codigo]+=stock;
						cout << tab << "STOCK ACTUALIZADO";
						break;
					case 0: break;
					default: break;
				} // fin switch sucursal
				cout << br << "\n\n\n" ;
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "ELIJA SU OPCION: " << "\n";
				cout << tab << "1 : Consultar Stock";
				cout << tab << "2 : Consultar Ventas";
				cout << tab << "-> 3 : Modificar Articulo";
				cout << tab << "4 : Consultar disponibilidad de articulo en sucursal";
				cout << tab << "5 : Promedio de ventas por articulo";
				cout << tab << "6 : Listado de ventas y existencias por sucursal";
				cout << tab << "7 : Sucursal que registra menos existencia de articulos";
				cout << tab << "8 : Promedio de ventas \n";
				cout << tab << "0 : Salir" << "\n";
				cin >> menu;
				break;
			case 5:
				system("clear");
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "PROMEDIO DE VENTAS POR ARTICULO" << "\n";
					cout << br << tab << "ARTICULO  ||   PROMEDIO DE VENTA" ;
				for (int i = 0; i < n; ++i) {
					cout << tab 	  << i+1<< "         ||    " << s1_venta[i]+s2_venta[i]+s3_venta[i]/3;
				}
				cout << br << "\n\n\n" ;

				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "ELIJA SU OPCION: " << "\n";
				cout << tab << "1 : Consultar Stock";
				cout << tab << "2 : Consultar Ventas";
				cout << tab << "3 : Modificar Articulo";
				cout << tab << "4 : Consultar disponibilidad de articulo en sucursal";
				cout << tab << "-> 5 : Promedio de ventas por articulo";
				cout << tab << "6 : Listado de ventas y existencias por sucursal";
				cout << tab << "7 : Sucursal que registra menos existencia de articulos";
				cout << tab << "8 : Promedio de ventas \n";
				cout << tab << "0 : Salir" << "\n";
				cin >> menu;
				break;
			case 6:
				system("clear");
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "LISTADO DE VENTAS POR SUCURSAL" << "\n";
					cout << br << tab << "ARTICULO  ||  SUCURSAL 1  ||  SUCURSAL 2  ||  SUCURSAL 3   ||  TOTALES" ;
				for (int i = 0; i < n; ++i) {
					cout << tab 	  << i+1<< "         ||     "<< s1_stock[i]-s1_venta[i] << "       ||     "<< s2_stock[i]-s2_venta[i] << "       ||     "<< s3_stock[i]-s3_venta[i] << "   ||  " << (s1_stock[i]-s1_venta[i])+(s2_stock[i]-s2_venta[i])+(s3_stock[i]-s3_venta[i]);
				}
				cout << br << "\n" ;
				cout << tab << "LISTADO DE EXISTENCIAS POR SUCURSAL" << "\n";
					cout << br << tab << "ARTICULO  ||  SUCURSAL 1  ||  SUCURSAL 2  ||  SUCURSAL 3   ||  TOTALES" ;
				for (int i = 0; i < n; ++i) {
					cout << tab 	  << i+1<< "         ||     "<< s1_venta[i] << "       ||     "<< s2_venta[i] << "       ||     "<< s3_venta[i] << "   ||  " << s1_venta[i]+s2_venta[i]+s3_venta[i];
				}
				cout << br << "\n\n\n" ;
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "ELIJA SU OPCION: " << "\n";
				cout << tab << "-> 1 : Consultar Stock";
				cout << tab << "2 : Consultar Ventas";
				cout << tab << "3 : Modificar Articulo";
				cout << tab << "4 : Consultar disponibilidad de articulo en sucursal";
				cout << tab << "5 : Promedio de ventas por articulo";
				cout << tab << "6 : Listado de ventas y existencias por sucursal";
				cout << tab << "7 : Sucursal que registra menos existencia de articulos";
				cout << tab << "8 : Promedio de ventas \n";
				cout << tab << "0 : Salir" << "\n";
				cin >> menu;
				break;
			case 7:
				system("clear");
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "SUCURSAL CON MENOS ARTICULOS:" << "\n";
				int total_s1 = 0; int total_s2 = 0; int total_s3 = 0;
				for (int i = 0; i < n; ++i) { 
					total_s1+=(s1_stock[i]-s1_venta[i]); 
					total_s2+=(s2_stock[i]-s2_venta[i]); 
					total_s3+=(s3_stock[i]-s3_venta[i]); 
				}

				if (total_s1 < total_s2 && total_s1 < total_s3){
					cout << tab << "La sucursal con menos articulos es la sucursal 1 con : " << total_s1<< "\n";
				} else if (total_s2 < total_s3){
					cout << tab << "La sucursal con menos articulos es la sucursal 2 con : " << total_s2<< "\n";
				} else {
					cout << tab << "La sucursal con menos articulos es la sucursal 3 con : " << total_s3<< "\n";
				}
				cout << br << "\n\n\n" ;
				cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
				cout << tab << "ELIJA SU OPCION: " << "\n";
				cout << tab << "1 : Consultar Stock";
				cout << tab << "2 : Consultar Ventas";
				cout << tab << "3 : Modificar Articulo";
				cout << tab << "4 : Consultar disponibilidad de articulo en sucursal";
				cout << tab << "5 : Promedio de ventas por articulo";
				cout << tab << "6 : Listado de ventas y existencias por sucursal";
				cout << tab << "-> 7 : Sucursal que registra menos existencia de articulos";
				cout << tab << "8 : Promedio de ventas \n";
				cout << tab << "0 : Salir" << "\n";
				cin >> menu;
				break;
		} // fin switch menu
	} //fin while menu

	// FIN MENU Y FIN PROGRAMA
	system("clear");
	cout << br << tab << "SISTEMA DE GESTION DE ARTICULOS" << br << "\n\n\n";
	cout << tab << "ADIOS :)" << "\n\n\n\n";
} //fin main
