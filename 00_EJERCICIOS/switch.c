#include <cstdlib>
#include <iostream>
//#include <stdlib.h>

using namespace std;
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Ingrese numero A \n";
	cin >> a;
	cout << "Ingrese numero B \n";
	cin >> b;
	
	c = a;
	a = b;
	cout << "ahora a vale igual que b (" << a << ")\n";
	b = c;
	cout << "ahora b vale igual que a (" << c << ")\n";
}

