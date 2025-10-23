/* Escriba un programa que solicite un numero binario (compuesto solo por digitos 0 y 1) como una cadena de texto y lo convierta a su equivalente decimal*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int binariodecimal(string& binario){
	
	int decimal=0;
	int longitud=binario.length();
	
	for(int i=0; i < longitud;i++){
		if(binario[longitud-1-i]== '1'){
			decimal += std::pow(2,i);
		}
	}	
	
	return decimal;
	
	
}

int main(){
	char op;
	
	do{
	string numerobinario;
	cout<<"Ingrese un numero binario :  " <<endl;  
	cin >>numerobinario;
	
	int resultadodecimal=binariodecimal(numerobinario);
	
	cout<<"el equivalente en decimal es :   " <<resultadodecimal<< endl;
	
	cout<< "Desea continuar con la ejecucion del programa?: (PARA CONTINUAR PRESIONE S O s)"<<endl;
	cin>>op;
	
	}
	while (op=='s'||op=='S');
	
	cout<<"CERRANDO PROGRAMA" <<endl;
	return 0;
}

