	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		int n1 = 0;
		int n2 = 0;
		int op = 0;
		int res = 0;
		string tab = "\n ::: ";

		
		do {
			cout << tab << "Ingrese el primer numero: ";
			cin >> n1;
		} while ( n1 <= 0);

		do {
			cout << tab << "Ingrese el primer numero: ";
			cin >> n2;
		} while ( n2 <= 0);

		do
		{
			cout << tab << "Ingrese la opcion: " ;
			cout << tab << "1 - Sumar" ;
			cout << tab << "2 - Restar" ;
			cout << tab << "3 - Multiplicar" ;
			cout << tab << "4 - Dividir" ;
			cout << tab << "5 - Salir" << tab << ">";
			cin >>op;
			switch (op){
				case 1 : res = n1+n2; break;
				case 2 : res = n1-n2; break;
				case 3 : res = n1*n2; break;
				case 4 : res = n1/n2; break;
				case 5 : exit(0); break;
			}
			cout << tab << "El resultado de la operacion entre " << n1 << " y " << n2 << " es " << res;
		} while (op >=1 && op <=5);

		
	}