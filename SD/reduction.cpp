#include <iostream>
using namespace std;

int main(){
	float vectorone[2];
	float vectortwo[2];
	float vectorreduce[2];
	int i;
	for(i=0; i<2; i++){
		cout << "Ingrese el componente " <<i+1 << " del primer vector: ";
		cin >> vectorone[i];
	}
	cout << endl;
	for(i=0; i<2; i++){
		cout << "Ingrese el componente " <<i+1 << " del segundo vector: ";
		cin >> vectortwo[i];
	}
	cout << endl;
	for(i=0; i<2; i++){
		vectorreduce[i] = vectorone[i] - vectortwo[i];
	}
	cout << "La reduccion de los vectores es: ";
	
	for(i=0; i<2; i++){
	cout << vectorreduce[i] << " ";
	}
}
