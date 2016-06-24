#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	int n = 0;
	cout << "Ingrese la cantidad de alumnos -> ";
	cin >> n;
	int trim1[n], trim2[n], trim3[n], prom[n] ;
	for (int i = 0; i < n; ++i)
	{
		trim1[i]=0;
		trim2[i]=0;
		trim3[i]=0;
		prom[i]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << "Ingrese las notas del alumno " << i+1 <<"\n";
		cout << "Primer Cuatrimestre -> \t";
		cin >> trim1[i];
		cout << "Primer Cuatrimestre -> \t";
		cin >> trim2[i];
		cout << "Primer Cuatrimestre -> \t";
		cin >> trim3[i];
		prom[i]= (trim1[i]+trim2[i]+trim3[i])/3;
	}
	cout << "Alumno\t1er\t2do\t3er\tProm\n";
	for (int i = 0; i < n; ++i)
	{
		cout << i+1 << "\t" << trim1[i]<< "\t" <<trim2[i]<< "\t" <<trim3[i] << "\t" << prom[i] << "\n";
	}
	return 0;
}