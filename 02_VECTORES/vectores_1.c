#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout << "Ingrese la cantidad de alumnos -> \t" ;
	cin >> n;
	int alumnos[n];
	for (int i = 0; i < n; ++i) alumnos[i] = 0;

	for (int i = 0; i < n; ++i)
	{
		cout << "Ingrese la edad del alumno " << i+1 << " -> \t";
		cin >> alumnos[i];
	}
	for (int i = 0; i < n; ++i) cout << "La edad del alumnos " << i+1 << " es " << alumnos[i] << "\n";
	return 0;
}