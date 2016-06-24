	#include <cstdlib>
	#include <iostream>
	using namespace std;

	int main(int argc, char const *argv[])
	{
		int dia = 0;
		int max = -9999;
		int min = 9999;
		int tempMax = 0;
		int tempMin = 0;
		int tempProm = 0;
		int diaMax = 0;
		int diaMin = 0;
		int dias = 9;
		string tab = "\n ::: ";

		cout << tab << "Ingrese la cantidad de dias: ";
		cin >> dias;

		for (int i = 0; i < dias; ++i)
		{
			dia = dia + 1;
			cout << tab << "Ingrese la temperatura Maxima del dia " << dia << " : ";
			cin >> tempMax;
			if (tempMax > max) { max = tempMax; diaMax = dia; };

			cout << tab << "Ingrese la temperatura Minima del dia " << dia << " : ";
			cin >> tempMin;
			if (tempMin < min) { min = tempMin; diaMin = dia; };
			tempProm += tempMax;
			tempProm += tempMin;
		}
		cout << tab << "El dia con mayor temperatura fue el dia " << diaMax << " con " << max << "° grados";
		cout << tab << "El dia con menor temperatura fue el dia " << diaMin << " con " << min << "° grados";
		if (min <0) { cout << tab << "Se registro un dia con temperaturas bajo 0"; }
		cout << tab << "El promedio de temperaturas fue de " << (tempProm/(dias))/2 << "° grados";
		cout << "\n\n\n\n";
	}	