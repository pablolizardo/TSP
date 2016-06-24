#include <cstdlib>
#include <iostream>
using namespace std;
int menu(){
		cout << "\nMENU\n";
		cout << "\n 1 - expediente de la obra de mayor tamaño en el centro";
		cout << "\n 2 - tipo de viviendas por zona";
		cout << "\n 3 - Ver existencia de expediente";
		cout << "\n 4 - cantidad de viviendas por tipo y zona";
		cout << "\n 5 - listado ordenado de expedientes segun metros cuadrados";
		cout << "\n 6 - Ver todos los expedientes";
		cout << "\n 7 - Salir";
	cout << "\n" << "Elija su opcion -> ";

	}
int main() {
	int f = 10;
	int c = 4;
	int m[10][4]={{10,20,0,1},{11,60,1,0},{12,401,0,2},{13,50,0,0},{14,0,2,0},{15,20,2,1},{16,20,0,1},{17,10,1,0},{18,20,2,0},{19,100,1,2}};
	cout << "\n\n";
	cout << "\t#\tmts\ttipo\tzona\n";
	for (int i = 0; i < f; ++i) {for (int j = 0; j < c; ++j) {cout << "\t" << m[i][j]; } cout << endl; }
	int mayor = 0;
	int codmayor = 0;
	int opcion =0;
	int tz[3][3];
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			tz[i][j]=0;
		}
	}
	int t=0;
	int z=0;
	int expediente=0;
	int banderaexpediente=0;
	menu();
	cin >> opcion;
	while(opcion >0 && opcion < 7){
		switch (opcion ){
			case 1:
				for (int i = 0; i < f; ++i) {
					if (m[i][3]==0) {
						if (m[i][1]> mayor) {
							mayor = m[i][1];
							codmayor =  m[i][0];
						}
					}
				}
				cout << "\n El expediente numero #" << codmayor << " de " << mayor << "mtsx2 es la mayor obra en el centro";
				break;
			case 2:
				for (int i = 0; i < f; ++i) {
					t=m[i][2];
					z=m[i][3];
					tz[t][z]++;
				}
				cout << "\n TIPOS DE OBRA POR ZONA \n";
				cout << "\tZ:0\tZ:1\tZ:2 \n";
				for (int i = 0; i < 3; ++i) {
					for (int j = 0; j < 3; ++j) {
						cout << "\t" <<tz[i][j];
					}
					cout << endl;
				}
			case 3 :
				cout << "Ingrese nro de expediente -> ";
				cin >> expediente;
				for (int i = 0; i < f && m[i][0] == expediente; ++i) {
					cout << "El expediente #" << expediente << " se encuentra guardado";
				}
				break;
			case 5:
					cout << "\n\n ORDENAR POR this \n\n";
					int aux=0;
					for (int i = 0; i < n-1; ++i) {
						for (int j = i+1; j < m; ++j) {
							if (mat[i][columna a ordenar]<mat[j][columna a ordenar]) {
								for (int k = 0; k < m; ++k) {
									aux=mat[i][k];
									mat[i][k]=mat[j][k];
									mat[j][k]=aux;
								}
							}
						}
					}
				

			default : break;
		}
		menu();
		cin >> opcion;
	}
	
	return 0;
}
