#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string tab = 			"\n ::: ";
	string br = 			"\n :::::::::::::::::::::::::::::::::::::::::::::::::: ";

	int m_Id_1 = 1; int m_Id_1_cafe = 0; int m_Id_1_leche = 0; int m_Id_1_cacao = 0; int m_Id_1_infusiones_cafe = 0; int m_Id_1_infusiones_submarino  = 0; int m_Id_1_infusiones_cafeleche = 0; int m_Id_1_infusiones_capuchino = 0; 
	int m_Id_2 = 2; int m_Id_2_cafe = 0; int m_Id_2_leche = 0; int m_Id_2_cacao = 0; int m_Id_2_infusiones_cafe = 0; int m_Id_2_infusiones_submarino  = 0; int m_Id_2_infusiones_cafeleche = 0; int m_Id_2_infusiones_capuchino = 0; 
	int m_Id_3 = 3; int m_Id_3_cafe = 0; int m_Id_3_leche = 0; int m_Id_3_cacao = 0; int m_Id_3_infusiones_cafe = 0; int m_Id_3_infusiones_submarino = 0; int m_Id_3_infusiones_cafeleche = 0; int m_Id_3_infusiones_capuchino = 0;

	int deposito_min = 30;
	int deposito_max = 300;

	int pedido = 0;
	int m_elegida = 0;
	int cantidad = 0;
	
	int opcion = 0;

	cout << br << tab << tab << "Bienvenidos a el software de gestion de Maquina de bebidas" << tab << br;
	cout << tab << "Ingrese la informacion de la maquina numero #1 ";
	cout << tab << "Cantidad de Cafe disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_1_cafe ;
	while (m_Id_1_cafe < deposito_min || m_Id_1_cafe > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de Cafe disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_1_cafe ;
	} 

	cout << tab << "Cantidad de Leche disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_1_leche ;
	while (m_Id_1_leche < deposito_min || m_Id_1_leche > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de leche disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_1_leche ;
	} 
	cout << tab << "Cantidad de Cacao disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_1_cacao ;
	while (m_Id_1_cacao < deposito_min || m_Id_1_cacao > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de cacao disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_1_cacao ;
	} 


	cout << tab << "Ingrese la informacion de la maquina numero #2 ";
	cout << tab << "Cantidad de Cafe disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_2_cafe ;
	while (m_Id_2_cafe < deposito_min || m_Id_2_cafe > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de Cafe disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_2_cafe ;
	} 

	cout << tab << "Cantidad de Leche disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_2_leche ;
	while (m_Id_2_leche < deposito_min || m_Id_2_leche > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de leche disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_2_leche ;
	} 
	cout << tab << "Cantidad de Cacao disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_2_cacao ;
	while (m_Id_2_cacao < deposito_min || m_Id_2_cacao > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de cacao disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_2_cacao ;
	} 

	cout << tab << "Ingrese la informacion de la maquina numero #3 ";
	cout << tab << "Cantidad de Cafe disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_3_cafe ;
	while (m_Id_3_cafe < deposito_min || m_Id_3_cafe > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de Cafe disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_3_cafe ;
	} 

	cout << tab << "Cantidad de Leche disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_3_leche ;
	while (m_Id_3_leche < deposito_min || m_Id_3_leche > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de leche disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_3_leche ;
	} 
	cout << tab << "Cantidad de Cacao disponible (Minimo: 30 | Maximo: 300) -> ";
	cin >> m_Id_3_cacao ;
	while (m_Id_3_cacao < deposito_min || m_Id_3_cacao > deposito_max) {
	    cout << tab << "Vuelva a ingresar una cantidad valida por favor " << br << tab << "Cantidad de cacao disponible (Minimo: 30 | Maximo: 300) -> ";
		cin >> m_Id_3_cacao ;
	} 

	cout <<  br << tab;
	cout << tab << "DATOS INICIALES TOMADOS" << tab << "POR FAVOR INGRESE INFORMACION DE LOS PEDIDOS";
	cout << tab << br;

    cout << tab << "Ingrese por favor el codigo de la maquina: (1, 2, 3)" << tab << "-> " ;
	cin >> m_elegida;

    while (m_elegida !=0)
    {
    	cout << br << tab;
    	switch (m_elegida) {
    		case 1 : 
    			cout << tab << "CANTIDADES DISPONIBLES:" << tab << "Cafe: " << m_Id_1_cafe << " | Leche: " << m_Id_1_leche << " | Cacao: " << m_Id_1_cacao ;
    			break;
    		case 2 : 
    			cout << tab << "CANTIDADES DISPONIBLES:" << tab << "Cafe: " << m_Id_2_cafe << " | Leche: " << m_Id_2_leche << " | Cacao: " << m_Id_2_cacao ;
    			break;
    		case 3 : 
    			cout << tab << "CANTIDADES DISPONIBLES:" << tab << "Cafe: " << m_Id_3_cafe << " | Leche: " << m_Id_3_leche << " | Cacao: " << m_Id_3_cacao ;
    			break;
    		default: 
    			cout << tab << "Por favor ingrese un numero de maquina valido.";
    			break;
     	}
    	cout << tab << br << "\n" << tab << "Ingrese por favor el codigo de la infusion:" << tab << "1 : Cafe" << tab << "2 : Submarino" << tab << "3 : Cafe con Leche" << tab << "4 : Capuchino" << tab << "-> " ;
	    cin >> pedido;
	    switch (m_elegida) {
    		case 1 : 
    			switch (pedido) {
    				case 1 : 
    					if (m_Id_1_cafe > 30) {
    						m_Id_1_cafe -= 30;
    						m_Id_1_infusiones_cafe ++;
    						cout << br << tab << tab << "CAFE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
    					break;

		    		case 2 : 
    					if (m_Id_1_leche > 20 && m_Id_1_cacao > 30 ) {
			    			m_Id_1_leche -= 20; m_Id_1_cacao -= 30;
			    			m_Id_1_infusiones_submarino ++;		
    						cout << br << tab << tab << "SUBMARINO PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
		    			break;
		    		case 3 : 
    					if (m_Id_1_cafe > 25 && m_Id_1_leche > 15 ) {
			    			m_Id_1_cafe -= 25; m_Id_1_leche-= 15;
			    			m_Id_1_infusiones_cafeleche ++;		
			    			cout << br << tab << tab << "CAFE CON LECHE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 

		    			break;
		    		case 4 : 
    					if (m_Id_1_cafe > 30 && m_Id_1_leche > 25 && m_Id_1_cacao > 20 ) {
			    			m_Id_1_cafe -= 30; m_Id_1_leche-= 25; m_Id_1_cacao -= 20;
		    				m_Id_1_infusiones_capuchino	++;		
			    			cout << br << tab << tab << "CAPUCHINO CON LECHE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
		    			break;
		    		}
	    			break;
    		case 2 : 
    			switch (pedido) {
    				case 1 : 
    					if (m_Id_2_cafe > 30) {
    						m_Id_2_cafe -= 30;
    						m_Id_2_infusiones_cafe ++;
    						cout << br << tab << tab << "CAFE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
    					break;

		    		case 2 : 
    					if (m_Id_2_leche > 20 && m_Id_2_cacao > 30 ) {
			    			m_Id_2_leche -= 20; m_Id_2_cacao -= 30;
			    			m_Id_2_infusiones_submarino ++;		
    						cout << br << tab << tab << "SUBMARINO PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
		    			break;
		    		case 3 : 
    					if (m_Id_2_cafe > 25 && m_Id_2_leche > 15 ) {
			    			m_Id_2_cafe -= 25; m_Id_2_leche-= 15;
			    			m_Id_2_infusiones_cafeleche ++;		
    						cout << br << tab << tab << "CAFE CON LECHE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 

		    			break;
		    		case 4 : 
    					if (m_Id_2_cafe > 30 && m_Id_2_leche > 25 && m_Id_2_cacao > 20 ) {
			    			m_Id_2_cafe -= 30; m_Id_2_leche-= 25; m_Id_2_cacao -= 20;
		    				m_Id_2_infusiones_capuchino	++;		
			    			cout << br << tab << tab << "CAPUCHINO CON LECHE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
		    			break;
		    		}
	    			break;
    		case 3 : 
    			switch (pedido) {
    				case 1 : 
    					if (m_Id_3_cafe > 30) {
    						m_Id_3_cafe -= 30;
    						m_Id_3_infusiones_cafe ++;
    						cout << br << tab << tab << "CAFE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
    					break;

		    		case 2 : 
    					if (m_Id_3_leche > 20 && m_Id_3_cacao > 30 ) {
			    			m_Id_3_leche -= 20; m_Id_3_cacao -= 30;
			    			m_Id_3_infusiones_submarino ++;		
    						cout << br << tab << tab << "SUBMARINO PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
		    			break;
		    		case 3 : 
    					if (m_Id_3_cafe > 25 && m_Id_3_leche > 15 ) {
			    			m_Id_3_cafe -= 25; m_Id_3_leche-= 15;
			    			m_Id_3_infusiones_cafeleche ++;		
    						cout << br << tab << tab << "CAFE CON LECHE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 

		    			break;
		    		case 4 : 
    					if (m_Id_3_cafe > 30 && m_Id_3_leche > 25 && m_Id_3_cacao > 20 ) {
			    			m_Id_3_cafe -= 30; m_Id_3_leche-= 25; m_Id_3_cacao -= 20;
		    				m_Id_3_infusiones_capuchino	++;		
			    			cout << br << tab << tab << "CAPUCHINO CON LECHE PREPARADO" << tab << br << "\n";
    					} else cout << tab << "Los ingredientes no son suficientes como para realizar la infusion. " << tab << "Por favor contactese con el proveedor para realizar los recambios. Gracias."; 
		    			break;
		    		}
	    			break;
    	}

		cout << tab << "Ingrese por favor el codigo de la maquina: (1, 2, 3)" << tab << "-> " ;
		cin >> m_elegida;


    }
    cout << br << tab << br ;
    cout << tab << "Muchas gracias por ingresar sus pedidos." << tab << "Elija una opcion para conocer el estado de las maquinas:";
    cout << tab << " 1 - Maquina con nivel de ingredientes bajo ( menos de 5 gramos )";
    cout << tab << " 2 - Maquinas con poco uso";
    cout << tab << " 3 - Maquina que mas cafe preparo: ";
    cout << tab << " 4 - Maquina que mas submarinos preparo: ";
    cout << tab << " 5 - Maquina que mas cafe con leche preparo: ";
    cout << tab << " 6 - Maquina que mas capuchino preparo" ;
    cout << tab << " 7 - Estadisticas Generales" ;
    cout << tab << " 8 - Ingreso de datos masivo" ;
    cout << tab << " 0 - SALIR " << tab << "-> " ;
    cin >> opcion;
    while(opcion !=0) {
        switch (opcion) {
        	case 1 :
        		if ( m_Id_1_cafe<30 || m_Id_1_leche<30  || m_Id_1_cacao<30 ) cout << tab << "La maquina 1 posee nivel de ingredientes bajo." <<tab << "Cafe: " << m_Id_1_cafe << " | Leche: " << m_Id_1_leche << " | Cacao: " << m_Id_1_cacao ;
        		if ( m_Id_2_cafe<30 || m_Id_2_leche<30  || m_Id_2_cacao<30 ) cout << tab << "La maquina 2 posee nivel de ingredientes bajo." <<tab << "Cafe: " << m_Id_2_cafe << " | Leche: " << m_Id_2_leche << " | Cacao: " << m_Id_2_cacao ;
        		if ( m_Id_3_cafe<30 || m_Id_3_leche<30  || m_Id_3_cacao<30 ) cout << tab << "La maquina 3 posee nivel de ingredientes bajo." <<tab << "Cafe: " << m_Id_3_cafe << " | Leche: " << m_Id_3_leche << " | Cacao: " << m_Id_3_cacao ;
        		cout << tab ;
        		break;
        	case 2 :
        		if ( m_Id_1_infusiones_cafe==0 && m_Id_1_infusiones_submarino==0 && m_Id_1_infusiones_cafeleche==0  && m_Id_1_infusiones_capuchino==0  ) 
        			{ cout << tab << "La maquina 1 no se uso para preparar insumos"; }; 
        		if ( m_Id_2_infusiones_cafe==0 && m_Id_2_infusiones_submarino==0 && m_Id_2_infusiones_cafeleche==0  && m_Id_2_infusiones_capuchino==0  ) 
        			{ cout << tab << "La maquina 2 no se uso para preparar insumos"; }; 
        		if ( m_Id_3_infusiones_cafe==0 && m_Id_3_infusiones_submarino==0 && m_Id_3_infusiones_cafeleche==0  && m_Id_3_infusiones_capuchino==0  ) 
        			{ cout << tab << "La maquina 3 no se uso para preparar insumos"; }; 
        		cout << tab ;
        		break;
        	case 3 :
        		if (m_Id_1_infusiones_cafe>= m_Id_2_infusiones_cafe && m_Id_1_infusiones_cafe>= m_Id_3_infusiones_cafe) 						
        			{ cout << tab << "La maquina 1 es la que mas cafe preparo." ; }
        		if (m_Id_2_infusiones_cafe>= m_Id_1_infusiones_cafe && m_Id_2_infusiones_cafe>= m_Id_3_infusiones_cafe) 						
        			{ cout << tab << "La maquina 2 es la que mas cafe preparo." ; }
        		if (m_Id_3_infusiones_cafe>= m_Id_2_infusiones_cafe && m_Id_3_infusiones_cafe>= m_Id_1_infusiones_cafe) 						
        			{ cout << tab << "La maquina 3 es la que mas cafe preparo." ; }
        		cout << tab ;
        		break;
        	case 4 :
        		if (m_Id_1_infusiones_submarino>= m_Id_2_infusiones_submarino && m_Id_1_infusiones_submarino>= m_Id_3_infusiones_submarino) 	
        			{ cout << tab << "La maquina 1 es la que mas submarinos preparo." ; }
        		if (m_Id_2_infusiones_submarino>= m_Id_1_infusiones_submarino && m_Id_2_infusiones_submarino>= m_Id_3_infusiones_submarino) 	
        			{ cout << tab << "La maquina 2 es la que mas submarinos preparo." ; }
        		if (m_Id_3_infusiones_submarino>= m_Id_2_infusiones_submarino && m_Id_3_infusiones_submarino>= m_Id_1_infusiones_submarino) 	
        			{ cout << tab << "La maquina 3 es la que mas submarinos preparo." ; }
        		cout << tab ;
        		break;
        	case 5 :
        		if (m_Id_1_infusiones_cafeleche<= m_Id_2_infusiones_cafeleche && m_Id_1_infusiones_cafeleche<= m_Id_3_infusiones_cafeleche) 	
        			{ cout << tab << "La maquina 1 es la que meno scafe c/leche preparo." ; }
        		if (m_Id_2_infusiones_cafeleche<= m_Id_1_infusiones_cafeleche && m_Id_2_infusiones_cafeleche<= m_Id_3_infusiones_cafeleche) 	
        			{ cout << tab << "La maquina 2 es la que menos cafe c/leche preparo." ; }
        		if (m_Id_3_infusiones_cafeleche<= m_Id_2_infusiones_cafeleche && m_Id_3_infusiones_cafeleche<= m_Id_1_infusiones_cafeleche) 	
        			{ cout << tab << "La maquina 3 es la que menos cafe c/leche preparo." ; }
        		cout << tab ;
        		break;
        	case 6 :
        		if (m_Id_1_infusiones_cafe< m_Id_2_infusiones_capuchino && m_Id_1_infusiones_capuchino< m_Id_3_infusiones_capuchino) 		
        			{ cout << tab << "La maquina 1 es la que menos capuchino preparo." ; }
        		if (m_Id_2_infusiones_capuchino< m_Id_1_infusiones_capuchino && m_Id_2_infusiones_capuchino< m_Id_3_infusiones_capuchino) 	
        			{ cout << tab << "La maquina 2 es la que menos capuchino preparo." ; }
        		if (m_Id_3_infusiones_capuchino< m_Id_2_infusiones_capuchino && m_Id_3_infusiones_capuchino< m_Id_1_infusiones_capuchino) 	
        			{ cout << tab << "La maquina 3 es la que menos capuchino preparo." ; }
        		cout << tab ;
        		break;
        	case 7 :
        		cout << br << tab 	<< " Maquina 		|  Cafe   |   Leche   |  Cacao  ";
        		cout << tab 		<< " Maquina 1 	| " << m_Id_1_cafe << "gr  |  " << m_Id_1_leche << "cm/3  |  " << m_Id_1_cacao << "gr";
        		cout << tab 		<< " Maquina 2 	| " << m_Id_2_cafe << "gr  |  " << m_Id_2_leche << "cm/3  |  " << m_Id_2_cacao << "gr";
        		cout << tab 		<< " Maquina 3 	| " << m_Id_3_cafe << "gr  |  " << m_Id_3_leche << "cm/3  |  " << m_Id_3_cacao << "gr";
        		cout << br ;
        		cout << br << tab 	<< " Maquina 		|  Cafe   	|   Submarino   |  Cafe c/Leche  |  Capuchino  ";
        		cout << tab 		<< " Maquina 1 	| 	" << m_Id_1_infusiones_cafe << "  	| 	 " << m_Id_1_infusiones_submarino << "  	|	" <<  m_Id_1_infusiones_cafeleche << "  	|  	" << m_Id_1_infusiones_capuchino;
        		cout << tab 		<< " Maquina 2 	| 	" << m_Id_2_infusiones_cafe << "  	| 	 " << m_Id_2_infusiones_submarino << "  	|	" <<  m_Id_2_infusiones_cafeleche << "  	|  	" << m_Id_2_infusiones_capuchino;
        		cout << tab 		<< " Maquina 3 	| 	" << m_Id_3_infusiones_cafe << " 	|	 " << m_Id_3_infusiones_submarino << "  	|	" <<  m_Id_3_infusiones_cafeleche << "  	|  	" << m_Id_3_infusiones_capuchino;
        		cout << tab << br;
        		break;
        	case 8 :
        		cout << tab << "Ingrese el codigo de la maquina: (1, 2, 3)" << tab << "-> " ;
        		cin >> m_elegida;
        		cout << tab << "Ingrese el codigo del infusion: (1 Cafe, 2 Submarino , 3 Cafe c/Leche , 4 Capuchino:" << tab << "-> " ;
        		cin >> pedido;
        		cout << tab << "Ingrese la cantidad deseada:" << tab << "-> " ;
        		cin >> cantidad;
        		cout << tab << "Usted ordeno " << cantidad << " del infusion " << pedido << " sobre la maquina numero #" << m_elegida;
        		switch (m_elegida) {
        			case 1 :
        				switch (pedido) {
        					case 1 : m_Id_1_cafe -= 30*cantidad; m_Id_1_infusiones_cafe += cantidad;break;
        					case 2 : m_Id_1_leche -= 20 * cantidad ; m_Id_1_cacao -= 30 * cantidad ; m_Id_1_infusiones_submarino += cantidad;break;
        					case 3 : m_Id_1_cafe -= 25 * cantidad ; m_Id_1_leche-= 15 * cantidad ; m_Id_1_infusiones_cafeleche += cantidad;break;
        					case 4 : m_Id_1_cafe -= 30 * cantidad ; m_Id_1_leche-= 25 * cantidad ; m_Id_1_cacao -= 20 * cantidad ; m_Id_1_infusiones_capuchino += cantidad;break;
        				}
        			case 2 :
        				switch (pedido) {
        					case 1 : m_Id_2_cafe -= 30*cantidad; m_Id_2_infusiones_cafe += cantidad;break;
        					case 2 : m_Id_2_leche -= 20 * cantidad ; m_Id_2_cacao -= 30 * cantidad ; m_Id_2_infusiones_submarino += cantidad;break;
        					case 3 : m_Id_2_cafe -= 25 * cantidad ; m_Id_2_leche-= 15 * cantidad ; m_Id_2_infusiones_cafeleche += cantidad;break;
        					case 4 : m_Id_2_cafe -= 30 * cantidad ; m_Id_2_leche-= 25 * cantidad ; m_Id_2_cacao -= 20 * cantidad ; m_Id_2_infusiones_capuchino += cantidad;break;
        				}
        			case 3 :
        				switch (pedido) {
        					case 1 : m_Id_3_cafe -= 30*cantidad; m_Id_3_infusiones_cafe += cantidad;break;
        					case 2 : m_Id_3_leche -= 20 * cantidad ; m_Id_3_cacao -= 30 * cantidad ; m_Id_3_infusiones_submarino += cantidad;break;
        					case 3 : m_Id_3_cafe -= 25 * cantidad ; m_Id_3_leche-= 15 * cantidad ; m_Id_3_infusiones_cafeleche += cantidad;break;
        					case 4 : m_Id_3_cafe -= 30 * cantidad ; m_Id_3_leche-= 25 * cantidad ; m_Id_3_cacao -= 20 * cantidad ; m_Id_3_infusiones_capuchino += cantidad;break;
        				}
        			break;
        		} // fin switch maquina elegida
        		break;
        }

        cout << tab << tab << "Muchas gracias por ingresar sus pedidos." << tab << "Elija una opcion para conocer el estado de las maquinas:";
	    cout << tab << " 1 - Maquina con nivel de ingredientes bajo ( menos de 5 gramos )";
	    cout << tab << " 2 - Maquinas con poco uso";
	    cout << tab << " 3 - Maquina que mas cafe preparo";
	    cout << tab << " 4 - Maquina que mas submarinos preparo";
	    cout << tab << " 5 - Maquina que mas cafe con leche preparo";
	    cout << tab << " 6 - Maquina que mas capuchino preparo" ;
    	cout << tab << " 7 - Estadisticas Generales" ;
    	cout << tab << " 8 - Ingreso de datos masivo" ;
	    cout << tab << " 0 - SALIR " << tab << "-> " ;
	    cin >> opcion;
    }
}