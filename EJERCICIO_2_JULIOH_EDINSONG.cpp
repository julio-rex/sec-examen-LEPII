/* Escriba , compile y ejecute un programa en c++ que emplee instrucciones repetitivas para determinar el numero de vehiculos cuyo precio de venta sea menor que 25000, entre 75000 y 120000 y mayores de 120000, de un total de ventas realizadas mensualmente ingresada por teclado.*/
#include <iostream>
using namespace std;

int main() 
{
	char op;
	char op2; //para el ingresode otros vehiculos
	float valor;
	float totalVentas;
	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
	
	// Contador 1 <25000, contador2 >75000 y <120000, contador 3 >120000, contador 4 entre 25000 y 75000
	
	int contadVehic = 0;// numero de vehiculos vendidos
	
	do{
	cout << "REGISTRO DE VENTAS"<<endl;
			
			totalVentas = 0;
			cont1 = 0; cont2 = 0; cont3 = 0; cont4 = 0;
			
			do{
			cout <<endl<< "Ingrese el valor del vehiculo vendido:"<<endl;
			
			cin>>valor;
			
			contadVehic++;
			
			
			if (valor<25000){
				totalVentas = totalVentas+valor;
				cont1++;
			}
			else if (valor >25000 && valor <=75000){
				totalVentas = totalVentas+valor;
				cont2++;
			}
			else if (valor >75000 && valor<=120000){
				totalVentas = totalVentas+valor;
				cont3++;
			}
			else if(valor >120000){
				totalVentas = totalVentas+valor;
				cont4++;
			}				
			
			cout<< "Desea ingresar el valor de otro vehiculo?: "<<endl;
			cin>>op2;
			
			}
			while (op2=='s'||op2=='S');
			
			cout<<"El total de vehiculos vendidos es de  "<<contadVehic<<endl;
			cout<<"El total de vehiculos vendidos cuyo precio es menor que 25000 es  "<<cont1<<endl;
			cout<<"El total de vehiculos vendidos cuyo precio es mayor que 25000 y menor que 75000 es  "<<cont2<<endl;
			cout<<"El total de vehiculos vendidos cuyo precio es mayor que 75000 y menor que 120000 es  "<<cont3<<endl;
			cout<<"El total de vehiculos vendidos cuyo precio es mayor que 120000 es  "<<cont4<<endl;
			cout<<"La sumatoria total de las ventas es "<<totalVentas<<endl;
			
	cout<< "Desea seguir con la ejecucion del programa?: "<<endl;
	cin>>op;
	
	}
	while (op=='s'||op=='S');
	cout<<"Cerrando Programa";
    return 0;
}
