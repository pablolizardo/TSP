#include <cstdlib>
#include <iostream>
using namespace std;
int suma(int x, int y){
	return x + y;
}
int menu() {
	cout << "Elija su opcion \n";
	cout << " 1 - Opcion 1 \n";
	cout << " 2 - Opcion 2 \n";
	cout << " 3 - Opcion 3 \n";
	cout << " 4 - Opcion 4 \n";
	cout << " 5 - Opcion 5 \n";
	cout << " 6 - Salir 6 \n";
}
int main() {
	int x ,y = 0;

	cout << "ingrese el valor de x ->";
	cin >> x;
	cout << "ingrese el valor de y ->";
	cin >> y;
	cout << suma(x,y) << "\n";
	menu();
}