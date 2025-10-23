/* realice un programa que permita leer un numero y diga si es perfecto 	*/

#include <iostream>
using namespace std;

int main() 
{
	char op;
	int numero;
	int condicion;
	int i;
	do{
		condicion = 0;
		
	cout << "DETERMINAR SI UN NUMERO ES O NO PERFECTO"<<endl;
	
	cout << "Ingrese un numero entero y positivo: ";
	
	cin>>numero;
	
	for (i=1 ; i <numero ; i++){
		if (numero%i ==0){
			condicion+= i;
		}
	}
	if (condicion == numero ){
		cout<<"el numero "<< numero<< " es un numero perfecto." <<endl;
	}else{
		cout<<"el numero "<< numero<< " no es un numero perfecto." <<endl;
	}
	cout<< "Desea seguir con la ejecucion del programa?: (PARA CONTINUAR PRESIONE S O s)"<<endl;
	cin>>op;
	
	}
	while (op=='s'||op=='S');
	cout<<"Cerrando Programa";
    return 0;
}
