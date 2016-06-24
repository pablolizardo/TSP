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
	cout << "Ingrese numero C \n";
	cin >> c;
	if (a<b && a<c) {
		cout << "el menor numero es A (" << a << ")> \n";
	} else {
		if (b<c) {
			cout << "el menor numero es B (" << b << ")> \n";
		} else {
			cout << "el menor numero es C (" << c << ")> \n";
		}
	}
}

