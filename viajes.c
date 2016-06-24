#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	
	bool debug = 0;
	cout << "cargar datos de prueba? 1 o 0 -> ";
	cin >> debug;
	
	int n=8;
	int m=4;
	int mat[8][4]={{101,0,0,32},{102,0,0,49},{103,2,1,34},{104,1,2,33},{105,0,3,31},{106,2,0,25},{107,1,1,29},{108,0,2,17}}; 

	if (debug==0){
		cout << "ingrese la cantidad de clientes a registar-> ";
		int n = 0;
		cin >> n;
		int mat[n][4];
		for (int i = 0; i < n; ++i) {
			cout << "\n Ingrese el codigo del cliente-> ";
			cin >> mat[i][0];
			cout << "\n Ingrese el destino (0:usa, 1:europa, 2:japon) -> ";
			cin >> mat[i][1];
			cout << "\n Ingrese el profesion (0:abogado, 2:ingeniero, 3:comerciante) -> ";
			cin >> mat[i][2];
			cout << "\n Ingrese la edad del cliente-> ";
			cin >> mat[i][3];
		}
	} 

	cout << "\n Datos del cliente \n";
	// for (int i = 0; i < n; ++i) {
	// 	cout << "\n";
	// 	cout << "\n Codigo" << mat[i][0];
	// 	cout << "\n Destino" << mat[i][1];
	// 	cout << "\n Profesion" << mat[i][2];
	// 	cout << "\n Edad" << mat[i][3];
	// }

	cout << "\t#\tDest\tProf\tEdad\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << "\t" << mat[i][j];
		}
		cout << "\n";
	}
	cout << "\n";
	int japon=0;
	for (int i = 0; i < n; ++i) {
		if (mat[i][1]==2 && mat[i][3]>30){
			japon++;
		}
	}
	cout << "1 : Los que viajan a japon son: " << japon << "\n\n";
	int mayor=0;
	int codmayor=0;
	for (int i = 0; i < n; ++i) {
		if (mat[i][3]>mayor) { 
			mayor= mat[i][3];
			codmayor= mat[i][0];

		}
	}
	cout << "2 : Codigo de cliente con mayor edad: " << codmayor << " con " << mayor << " pirulos \n\n";
	cout << "\n";
	int pd[3][3];
	int p=0;
	int d=0;
	for (int i = 0; i < 3; ++i) {for (int j = 0; j < 3; ++j) {pd[i][j]=0; } }
	for (int i = 0; i < n; ++i) {
		p=mat[i][2];
		d=mat[i][1];
		pd[p][d]++;
	}

	cout << "3 : Professiones y destingos: \n\n";
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3	; ++j)
		{
			cout << "\t"<<pd[i][j];
		}
		cout << endl;
	}
	cout << "\n\n ORDENAR POR EDAD \n\n";
	int mayor1=0;
	int aux=0;
	for (int i = 0; i < n-1; ++i) {
		for (int j = i+1; j < m; ++j) {
			if (mat[i][3]<mat[j][3]) {
				for (int k = 0; k < m; ++k) {
					aux=mat[i][k];
					mat[i][k]=mat[j][k];
					mat[j][k]=aux;
				}
			}
		}
	}
	cout << "\t#\tDest\tProf\tEdad\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << "\t" << mat[i][j];
		}
		cout << "\n";
	}
}	
