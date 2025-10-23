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
	string numerobinario;
	cout<<"ingrese un numero binario :  " <<endl;  
	cin >>numerobinario;
	
	int resultadodecimal=binariodecimal(numerobinario);
	cout<<"el equivalente en decimal es :   " <<resultadodecimal<< endl;
	return 0;
	
}