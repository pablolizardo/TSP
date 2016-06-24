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

		int mat[n][4];

		for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) mat[i][j]=0; 
		for (int i = 0; i < n; ++i) {
			mat[i][0]=i+1;
			cout << tab << "Codigo del cliente " << i+1 << " -> ";
			cout << tab << "Ingrese Destino (0,1,2,3) -> "  ;
			cin >> mat[i][1];
			cout << tab << "Ingrese Profesion (0,1,2,3) ->" ;
			cin >> mat[i][2];
			cout << tab << "Ingrese Edad ->" ;
			cin >> mat[i][3];
		}

	for (int i = 0; i < n; ++i)
	{
		cout << tab << "CODIGO \t DESTINO \t PROFESION \t EDAD " ;
		cout << tab << mat[i][1] << "\t\t" <<mat[i][1] << "\t\t" <<mat[i][1] << "\t\t" <<mat[i][1] ;

	}
}