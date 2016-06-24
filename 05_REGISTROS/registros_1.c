#include <cstdlib>
#include <iostream>
using namespace std;
struct object {
	int id;
	int stk;
	float prc;
	int cat; // 123
	int src; // 12
};
int main() {
	system("clear");
	cout << ":::::::::::::: SUPERMARKET APU :::::::::::::::\n";
	int n;
	//cout << "Ingrese la catidad de items";
	//cin >> n;
	n = 10;
	object o[n];
	o[0].id = 101; o[0].stk = 30; o[0].prc = 340.50;o[0].cat = 3; o[0].src = 2;
	o[1].id = 102; o[1].stk = 79; o[1].prc = 234; 	o[1].cat = 1; o[1].src = 1;
	o[2].id = 103; o[2].stk = 30; o[2].prc = 54; 	o[2].cat = 3; o[2].src = 2;
	o[3].id = 104; o[3].stk = 50; o[3].prc = 46; 	o[3].cat = 2; o[3].src = 1;
	o[4].id = 105; o[4].stk = 22; o[4].prc = 34; 	o[4].cat = 2; o[4].src = 1;
	o[5].id = 106; o[5].stk = 35; o[5].prc = 789; 	o[5].cat = 3; o[5].src = 2;
	o[6].id = 107; o[6].stk = 88; o[6].prc = 32; 	o[6].cat = 2; o[6].src = 2;
	o[7].id = 108; o[7].stk = 39; o[7].prc = 25; 	o[7].cat = 1; o[7].src = 1;
	o[8].id = 109; o[8].stk = 20; o[8].prc = 13; 	o[8].cat = 3; o[8].src = 1;
	o[9].id = 110; o[9].stk = 10; o[9].prc = 5; 	o[9].cat = 1; o[9].src = 2;


	cout << "#\tStock\tPrecio\tCat.\tOrigen\n";
	for (int i = 0; i < n; ++i)
	{
		cout << o[i].id<<"\t"<<o[i].stk<<"\t$"<<o[i].prc<<"\t"<<o[i].cat<<"\t"<<o[i].src<<"\n";
	}

	cout << "\n\n :::: PUNTO a :::: \n Buscar al articulo #104\n\n";
	cout << "#\tStock\tPrecio\tCat.\tOrigen\n";
	cout << o[3].id<<"\t"<<o[3].stk<<"\t$"<<o[3].prc<<"\t"<<o[3].cat<<"\t"<<o[3].src<<"\n";

	cout << "\n\n :::: PUNTO a :::: \n Buscar al articulo #115\n\n";
	int i = 0;
	for ( i = 0; i < n && o[i].id != 115; ++i);
	if (i==n){
		cout << "No se encontro el articulo #115\n";
	}	else {
		cout << "Si se encontro el articulo #115\n";

	}
	// PUNTO b
	cout << "\n\n :::: PUNTO b :::: \n Listado por precio\n\n";
	cout << "#\tStock\tPrecio\tCat.\tOrigen\n";
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < 5; ++j)
		{
			/* code */
		}
	}
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
}