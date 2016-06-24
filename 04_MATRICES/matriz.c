	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		string tab = 	"\n ::: ";
		string br = 	"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";
		int a = 0; int n =0; int m = 0;
		
		cout << tab << "Ingrese la candidad de filas -> " ;
		cin >> n;
		cout << tab << "Ingrese la candidad de columnas -> " ;
		cin >> m;

		int mat[n][m];

		for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) mat[i][j]=0; 
		for (int i = 0; i < n; ++i) 
			for (int j = 0; j < m; ++j) {
				cout << tab << "ingrese valor de [" << i << "][" << j << "] -> ";
				cin >> mat[i][j];
			}
		
		for (int i = 0; i < n; ++i) {
			cout << "\n";
			for (int j = 0; j < m; ++j) cout << mat[i][j] << "\t";
		}
		cout << tab << "\n\n\n" ;
		cout << tab << "MENU\n\n 1: Numeros positivos \n 2: Numeros negativos \n 3: Promedio de numeros \n 4: Maximo \n 5: Minimo \n 6: Total Fila \n 7: Total Columna \n 8: Cantidad de Ceros\n 0: Salir \n\n\n"  ;
		int positivos = 0;
		int negativos = 0;
		int opcion = 0;
		float suma = 0;
		int

		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (mat[i][j]>0)	positivos ++;
				if (mat[i][j]<0)	negativos ++;
				suma += mat[i][j];
    		}
		}

		cout << tab << "Ingrese Opcion -> ";
		cin >> opcion;
		while(opcion != 0) {
		    switch (opcion) {
		    	case 1 : cout << tab << "Positivos: " << positivos ; break;
		    	case 2 : cout << tab << "Negativos: " << negativos ; break;
		    	case 3 : cout << tab << "Promedio: " << suma/(m*n) ; break;
		    }
		    cout << tab << "Ingrese Opcion -> ";
			cin >> opcion;
		}
	}