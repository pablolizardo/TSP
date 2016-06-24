#include <cstdlib>
#include <iostream>
using namespace std;

struct venta {
	int codigo;
	int marca;
	int tipo;
	int forma;
	float precio;
};
void limpiar_pantalla (){
	system("clear");
	cout << "\n::::::: CONCESIONARIA ::::::\n";
}

int menu(){
	cout << "\n MENU : \n";
	cout << "1 - LISTADO POR MARCA\t";
	cout << "2 - MODIFICAR \t";
	cout << "3 - ELIMINAR \t";
	cout << "4 - MATRIZ \t";
	cout << "5 - LISTADO DE VENTAS\t";
	cout << "0 - Salir \n";
	cout << "\n\n";
}

int main() {
	
	int i = 0;
	int n = 0;
	int j = 0;
	int precio_final =0;
	int total_precio = 0;
	int total_precio_final = 0;
	int codigo_venta = 0;
	int mt[3][2];
	int m=0;
	int t=0;
	int valor =0;

	

	limpiar_pantalla();
	cout << "\n:::: Autor: Pablo Lizardo :::\n";
	cout << "\nIngrese la cantidad de ventas -> ";
	cin >> n;

	venta v[n];
	
	for ( i = 0; i < n; ++i) {
		limpiar_pantalla();
		cout << "\n::::::: CARGA DE DATOS ::::::\n";
		cout << "\n::::::: VEHICULO " << i+1<<" ::::::\n";

		v[i].codigo=1+i;
		do {
			cout << "\nIngrese la marca nueva (1-Fiat 2-Ford 3-Toyota) -> ";
			cin >> v[i].marca;
		} while (v[i].marca<=0 && cout << "\n!Ingrese una marca valido\n\n" || v[i].marca>=4 && cout << "\n!Ingrese una marca valido\n\n");
		
		do {
			cout << "Ingrese el tipo nuevo (1 Auto 2 Camioneta) -> ";
			cin >> v[i].tipo;
		} while (v[i].tipo<=0 && cout << "\n!Ingrese un tipo valido\n\n" || v[i].tipo>=3 && cout << "\n!Ingrese un tipo valido\n\n");

		do {
			cout << "Ingrese el precio nuevo -> ";
			cin >> v[i].precio;
		} while (v[i].precio<=0 && cout << "\n!Ingrese un precio valido\n\n" );
		
		do {
			cout << "Ingrese la forma de pago (1 contado 2 tarjeta ) -> ";
			cin >> v[i].forma;
		} while (v[i].forma<=0 && cout << "\n!Ingrese una forma de pago valida\n\n" || v[i].forma>=3 && cout << "\n!Ingrese una forma de pago valida\n\n");
	}

	menu();
	cout << "\n\n";
	int opcion = 0;
	cout << "Ingrese la opcion deseada -> ";
	cin >> opcion;
	while (opcion != 0) {
		switch (opcion) {
			case 1: 
				limpiar_pantalla();
				cout << "\n:::: LISTADO POR MARCA ::::\n\n";
				// LISTADO POR MARCA
				precio_final =0; total_precio = 0; total_precio_final = 0;
				cout << "Marca: Fiat\n";
				cout << "#\tMarca\tTipo \tForma \tPrecio\t\tPrecio Final\n";
				for (i = 0; i < n; ++i) 
					if (v[i].codigo !=0) {
						if (v[i].marca==1) {
							// aplicar descuentos e intereses:
							if (v[i].forma==1) precio_final = v[i].precio- ((v[i].precio*10)/100); else precio_final = v[i].precio+ ((v[i].precio*7)/100);
							cout <<  v[i].codigo<<"\t"<<v[i].marca<<"\t"<<v[i].tipo <<"\t"<<v[i].forma <<"\t$"<<v[i].precio<< "\t\t$"<<precio_final<<"\n";
							total_precio+=v[i].precio;
							total_precio_final+=precio_final;
						}
					}
				cout << "\n\t\t \t \t$"<< total_precio<<"\t$"<< total_precio_final<<"\n";
				// FIN LISTADO POR MARCA
				
				// LISTADO POR MARCA
				precio_final =0; total_precio = 0; total_precio_final = 0;
				cout << "Marca: Ford\n";
				cout << "#\tMarca\tTipo \tForma \tPrecio\t\tPrecio Final\n";
				for (i = 0; i < n; ++i) 
					if (v[i].codigo !=0) {
						if (v[i].marca==2) {
							// aplicar descuentos e intereses:
							if (v[i].forma==1) precio_final = v[i].precio- ((v[i].precio*10)/100); else precio_final = v[i].precio+ ((v[i].precio*7)/100);
							cout <<  v[i].codigo<<"\t"<<v[i].marca<<"\t"<<v[i].tipo <<"\t"<<v[i].forma <<"\t$"<<v[i].precio<< "\t\t$"<<precio_final<<"\n";
							total_precio+=v[i].precio;
							total_precio_final+=precio_final;
						}
					}
				cout << "\n\t\t \t \t$"<< total_precio<<"\t$"<< total_precio_final<<"\n";
				// FIN LISTADO POR MARCA
				// 
				// LISTADO POR MARCA
				precio_final =0; total_precio = 0; total_precio_final = 0;
				cout << "Marca: Toyota\n";
				cout << "#\tMarca\tTipo \tForma \tPrecio\t\tPrecio Final\n";
				for (i = 0; i < n; ++i) 
					if (v[i].codigo !=0) {
						if (v[i].marca==3) {
							// aplicar descuentos e intereses:
							if (v[i].forma==1) precio_final = v[i].precio- ((v[i].precio*10)/100); else precio_final = v[i].precio+ ((v[i].precio*7)/100);
							cout <<  v[i].codigo<<"\t"<<v[i].marca<<"\t"<<v[i].tipo <<"\t"<<v[i].forma <<"\t$"<<v[i].precio<< "\t\t$"<<precio_final<<"\n";
							total_precio+=v[i].precio;
							total_precio_final+=precio_final;
						}
					}
				cout << "\n\t\t \t \t$"<< total_precio<<"\t$"<< total_precio_final<<"\n";
				// FIN LISTADO POR MARCA
				break;
			case 2: 
				limpiar_pantalla();
				cout << "\n:::: MODIFICACION ::::\n\n";
				cout << "Ingresar el codigo de la venta a MODIFICAR -> ";
				cin >> codigo_venta;

				for ( i = 0; i < n & v[i].codigo != codigo_venta; ++i);
					if (i==n){
						cout << "La venta #"<< codigo_venta <<" no existe\n";
					} else {
						cout << "La venta #"<< codigo_venta <<" existe\n";
						cout << "Ingrese la marca nueva (1 Fiat 2 Ford 3 Toyota) ->";
						cin >> v[i].marca;
						cout << "Ingrese el tipo nuevo (1 Auto 2 Camioneta) ->";
						cin >> v[i].tipo;
						cout << "Ingrese el precio nuevo ->";
						cin >> v[i].precio;
						cout << "Ingrese la forma de pago (1 contado 2 tarjeta ) ->";
						cin >> v[i].forma;
					}
				break;
			case 3 :
				limpiar_pantalla();
				cout << "\n:::: ELIMINAR ::::\n\n";
				cout << "Ingresar el codigo de la venta a ELIMINAR -> ";
				cin >> codigo_venta;
				//cout << existe(codigo_venta);
				for ( i = 0; i < n & v[i].codigo != codigo_venta; ++i);
					if (i==n){
						cout << "La venta #"<< codigo_venta <<" no existe\n";
					} else {
						v[i].codigo = 0;
					}
				break;
			case 4 :
				limpiar_pantalla();
				cout << "\n::::::: MARCAS / TIPOS ::::::\n\n";
				for ( i = 0; i < 3; ++i) {for ( j = 0; j < 2; ++j) {mt[i][j]=0; } } 

				for (i = 0; i < n; ++i) {
					if (v[i].codigo !=0) {
						m=v[i].marca-1; 
						t=v[i].tipo-1;
						mt[m][t]+=v[i].precio;
					}
				}
				cout << "\tAuto\t\tCamioneta\n";
				
				for ( i = 0; i < 3; ++i) {
					
					switch (i) {
						case 0 : cout << "Fiat"; break;
						case 1 : cout << "Ford"; break;
						case 2 : cout << "Toyota"; break;
						default : break;
					}
					for ( j = 0; j < 2; ++j) {
						cout  << " \t" << mt[i][j] << "\t|";
					}
					cout << endl;
				}
				break;
			case 5 :
				limpiar_pantalla();
				cout << "\n::::::: LISTADO DE VENTAS ::::::\n\n";
				precio_final =0; total_precio = 0; total_precio_final = 0;
				cout << "\n#\tMarca\tTipo \tForma \tPrecio\t\tPrecio Final\n";
				for (i = 0; i < n; ++i) {
					if (v[i].codigo !=0) {
						// aplicar descuentos e intereses:
						if (v[i].forma==1) precio_final = v[i].precio- ((v[i].precio*10)/100); else precio_final = v[i].precio+ ((v[i].precio*7)/100);

						cout <<  v[i].codigo<<"\t"<<v[i].marca<<"\t"<<v[i].tipo <<"\t"<<v[i].forma <<"\t$"<<v[i].precio<< "\t\t$"<<precio_final<<"\n";
						total_precio+=v[i].precio;
						total_precio_final+=precio_final;
						}
					}
				cout << "\n\t\t \t \t$"<< total_precio<<"\t$"<< total_precio_final<<"\n";
				break;
			case 6 :
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
	cout << "\n";
	return 0;
}