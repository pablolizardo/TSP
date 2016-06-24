	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main()
	{
		int precio = 0 ;
		int ganancia = 0;
		string tab = "\n ::: ";
		do {
			cout << tab << "Ingrese el precio del articulo : $" ;
			cin >> precio ;
			ganancia = precio + ( (precio*20)/100);
			cout << tab << "Ud debe venderlo a : $"<<ganancia<<".- \n\n";
		} while (precio!=-1);
	}