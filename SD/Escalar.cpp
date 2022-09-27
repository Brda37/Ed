#include <iostream>
using namespace std;

int main(){
	float vectorone[3];
	float vectortwo[3];
	float vectorresult[3];
	float result=0 ;
	int i;
	for(i=0; i<3; i++){
		cout << "Ingrese el componente " <<i+1 << " del primer vector: ";
		cin >> vectorone[i];
	}
	cout << endl;
	
	for(i=0; i<3; i++){
		cout << "Ingrese el componente " <<i+1 << " del segundo vector: ";
		cin >> vectortwo[i];
	}
	cout << endl;
	
	for(i=0; i<3; i++){
		vectorresult[i] = vectorone[i] * vectortwo[i];
		result += vectorresult[i];
	}
	cout << endl;
	
	for(i=0; i<3; i++){
	vectorresult[i] = vectorone[i] * vectortwo[i];
	cout << "Indice "<< i+1 <<": " << vectorresult[i] << endl;
	}
	
	cout <<"Producto escalar de los vectores: ";
	
	cout << result << " ";
	
}
