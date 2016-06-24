#include <cstdlib>
#include <iostream>
using namespace std;
int main(){ 
	int num = 0;
	int resto = 0;

	cout << "ingrese numero";
	cin >> num;

	resto = num%2;

	if (resto == 0) cout << "Es par";
	else cout << "Es Impar";
}