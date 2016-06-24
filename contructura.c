#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	int f=10;
	int c=4;
	char pesos=' ';
	//for (int i = 0; i < f; ++i) {for (int j = 0; j < c; ++j) {m[i][j] = 0; } }
	int m[10][4]={{0,100,0,0}, {1,300,0,1}, {2,1230,0,0}, {3,1420,1,1}, {4,60,0,1}, {5,4200,0,1}, {6,10,1,0}, {7,900,0,1}, {8,40,0,0}, {9,30,0,0} };
	cout << "\t#\t$\tTipo\tCompra\n";
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			if (j==1) pesos='$';  else  pesos = ' '; 
			cout << "\t" << pesos << m[i][j];
		}
		cout << endl;
	}

	int mayor = 0;
	int codmayor = 0;
	for (int i = 0; i < f; ++i) {
		if (m[i][1]>mayor){
			mayor = m[i][1];
			codmayor = m[i][0];
		}
	}
	cout << "\n\nEl cliente que realizo la mayor compra fue " << codmayor << " pagando $" << mayor << "\n\n";
	
	cout << "\n\n CLIENTES QUE PAGARON EN EFECTIVO:\n\n";
	for (int i = 0; i < f; ++i) {
		if (m[i][2]==0){
			for (int j = 0; j < c; ++j) {
				if (j==1) pesos='$';  else  pesos = ' '; 
				cout << "\t" << pesos << m[i][j];			
			}
		cout << endl;
		}
	}
	cout << "\n\n CLIENTES QUE PAGARON CON TARJETA:\n\n";
	for (int i = 0; i < f; ++i) {
		if (m[i][2]==1){
			for (int j = 0; j < c; ++j) {
				if (j==1) pesos='$';  else  pesos = ' '; 
				cout << "\t" << pesos << m[i][j];		
			}
		cout << endl;
		}
	}

	int codcliente = 0;
	bool no = 0;
	cout << "\n\nIngrese un codigo de cliente -> ";
	cin >> codcliente;
	for (int i = 0; i < f; ++i) {
		if (m[i][0]==codcliente){
			for (int j = 0; j < c; ++j) {
				if (j==1) pesos='$';  else  pesos = ' '; 
				cout << "\t" << pesos << m[i][j];	
				no=1;
			}	
		} else {
			bool no=0;
		}
	}
	if (no==0) {cout << "No se encuentra ningun cliente con el codigo #" << codcliente; }
	cout << "\n\n";

	//int total[2][2];
	//for (int i = 0; i < 2; ++i) {for (int j = 0; j < 2; ++j) {total[i][j]=0; } }
	int ventas_por_tipo[2];
	for (int i = 0; i < f; ++i) {
		for (int j = 0; j < c; ++j) {
			if (m[i][3]==0) {ventas_por_tipo[0]+=m[i][1]; }
			if (m[i][3]==1) {ventas_por_tipo[1]+=m[i][1]; }
		}
	}
	cout << "\n\n MAYORISTA: $" << ventas_por_tipo[0]<< ".-\n";
	cout << "\n\n MINORISTA: $" << ventas_por_tipo[1]<< ".-\n";

	cout << "\n\n TIPO DE COMPRA: MAYORISTA: \n";
	cout << "\t#\tTipo\t$\n";
	for (int i = 0; i < f; ++i) {
		if (m[i][3]==0) {
			cout << "\t" << m[i][0] << "\t"<< m[i][2] << "\t" << m[i][1] << "\n";
		}
	}
	cout << "\n\n";

	cout << "\n\n TIPO DE COMPRA: MINORISTA: \n";
	cout << "\t#\tTipo\t$\n";
	for (int i = 0; i < f; ++i) {
		if (m[i][3]==1) {
			cout << "\t" << m[i][0] << "\t"<< m[i][2] << "\t" << m[i][1] << "\n";
		}
	}
	cout << "\n\n";

	return 0;
}