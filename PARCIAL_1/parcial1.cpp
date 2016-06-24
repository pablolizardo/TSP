#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int j = 0;
	
	cout << "Ingrese la cantidad de clientes -> ";
	cin >>n;

	int clientes[n][6];
	int anios[n];
	int opcion = 0;
	int saldoActualizado = 0;
	int porCiudad[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			porCiudad[i][j] = 0;
		}
	}

	//INICIALIZACION DE VARIABLES
	string tipo[3]={"Normal", "Moroso", "Espec."};
	string ciudad[3]={"Rio Gra", "Ushuaia", "Tolhuin"};

	//Inicializacion de arrays en 0
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < 6; j++) {
			clientes[i][j]=0; 
		}
		anios[i]=0;
	}

	// Ingreso de DATOS
	for (int i = 0; i < n; ++i) {
		cout << "\nIngrese el # Cuenta -> \t";
		cin >> clientes[i][0];
		cout << "\nIngrese el Tipo -> \t";
		cin >> clientes[i][1];
		cout << "\nIngrese la Ciudad -> \t";
		cin >> clientes[i][2];
		cout << "\nIngrese los Años -> \t";
		cin >> clientes[i][3];
		cout << "\nIngrese el Saldo -> \t";
		cin >> clientes[i][4];
		porCiudad[clientes[i][2]][clientes[i][1]]++;
	}

	// Devolucion de datos ingresados.
	cout << "### |\tTipo\t|\tCiudad\t|\tAños\t|\tSaldo\t|\tSaldo Actulizado\n";
	for (int i = 0; i < n; ++i) {
		// si es moroso
		switch (clientes[i][1]){
			case 2 :
				// el saldo actualizado es igual al saldo + el 5%
				clientes[i][5] = clientes[i][4]+(clientes[i][4]*5)/100; break;
			case 3 :
				// el saldo actualizado es igual al saldo - el 4%
				clientes[i][5] = clientes[i][4]-(clientes[i][4]*2)/100; break;
			default: 
				//sino el saldo actualizado es igual al saldo 
				clientes[i][5] = clientes[i][4]; break;
		}
		if (clientes[i][3] >=10) {
			clientes[i][5]=clientes[i][5]-300;
		}
		cout << clientes[i][0] << " |\t" << tipo[clientes[i][1]-1] << "\t|\t" << ciudad[clientes[i][2]-1] << "\t|\t" << clientes[i][3] << "\t|\t" << clientes[i][4] << "\t|\t" << clientes[i][5] <<"\n"  ;
	}

	// Menu de opciones
	cout << "\n\n\n\nElija una opcion: \n1 - Listado por tipo \n2 - Buscar y Actualizar cliente \n3 - Cliente por ciudad y tipo \n4 - Clientes de mayor antiguedad \n5 - Saldos por ciudad \n0 - Salir\n\n"; 
	cin >> opcion;

	int clienteTipo = 0;
	int numeroCliente = 0;
	int interes =0;
	int descuento =0;
	int modificar =0;
	while(opcion!=0) {
	    switch(opcion) {
	    	//punto 1
	    	case 1:
	    		cout << "\nIngrese el tipo del cliente -> ";
	    		cin >> clienteTipo;
    			cout << "### |\tSaldo\t|\tInteres\t|\tDesc.\t|\tSaldo Actulizado\n";
	    		for (int i = 0; i < n; ++i) {
	    			if (clientes[i][1]==clienteTipo){
	    				// si es moroso
						if (clientes[i][1]==2) {
							interes = (clientes[i][4]*5)/100;
						} else {interes =0; }
						// si es cliente especial
						if (clientes[i][1]==3) {
							descuento = (clientes[i][4]*2)/100;
						} else {
							descuento =0; 
						}
						if (clientes[i][3] >=10) {
							descuento + 300;
						}
	    				cout << clientes[i][0] << " |\t$" << clientes[i][4] << "\t|\t$" << interes << "\t|\t" << descuento << "\t|\t" << clientes[i][5] <<"\n"  ;
	    			}
	    		}
	    		break;
	    		// fin punto 1
	    		//punto 2
		    	case 2:
		    		cout << "\nIngrese el numero del cliente -> ";
		    		cin >> numeroCliente;
		    		for (int i = 0; i < n; ++i) {
						if (numeroCliente==clientes[i][0]){
							cout << "### |\tTipo\t|\tCiudad\t|\tAños\t|\tSaldo\n";
							cout << clientes[i][0] << " |\t" << tipo[clientes[i][1]-1] << "\t|\t" << ciudad[clientes[i][2]-1] << "\t|\t" << clientes[i][3] << "\t|\t" << clientes[i][4] << "\n"  ;
		    			}
		    		}
		    		cout << "Desea modificar los datos del cliente numero #" <<numeroCliente << " 1:si 2:no ->" ;
		    		cin >> modificar;
		    		if (modificar ==1) {
	    				cout << "\nIngrese el # Cuenta -> \t";
	    				cin >> clientes[numeroCliente-1][1] ;
						cout << "\nIngrese el Tipo -> \t";
						cin >> clientes[numeroCliente-1][2];
						cout << "\nIngrese la Ciudad -> \t";
						cin >> clientes[numeroCliente-1][3];
						cout << "\nIngrese los Años -> \t";
						cin >> clientes[numeroCliente-1][4];
						cout << "\nIngrese el Saldo -> \t";
						cin >> clientes[numeroCliente-1][5];
		    		} else if (modificar ==2){
		    			cout << "Gracias por su consulta \n\n";
		    		}
	    		break;
	    		

	    		case 3 :
	    			// punto 3
	    				cout << "\t Ciudad \t Tipo 1 \t Tipo 2 \t Tipo 3 \n";
	    				cout << "\t Ushuaia \t" << porCiudad[0][0+1] << "\t" << porCiudad[0][1+1] << "\t" << porCiudad[0][2+1] <<"\n";
	    				cout << "\t Rio Grande \t" << porCiudad[1][0+1] << "\t" << porCiudad[1][1+1] << "\t" << porCiudad[1][2+1] <<"\n";
	    				cout << "\t Tolhuin \t" << porCiudad[2][0+1] << "\t" << porCiudad[2][1+1] << "\t" << porCiudad[2][2+1] <<"\n";
	    			
	    		case 6:
					cout << "Gracias por su consulta \n\n";
	    			break;
	    		// fin punto 3
				default :
					cout << "Gracias por su consulta \n\n";
					break;
	    } // fin switch
		// Menu de opciones
		cout << "\n\n\n\nElija una opcion: \n1 - Listado por tipo \n2 - Buscar y Actualizar cliente \n3 - Cliente por ciudad y tipo \n4 - Clientes de mayor antiguedad \n5 - Saldos por ciudad \n0 - Salir\n\n"; 
		cin >> opcion;
	} //fin while menu
	cout << "Gracias por su consulta \n\n";

	//opcion ==0 entonces salir;
	return 0;
}

	