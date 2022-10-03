#include <iostream>
using namespace std;

int main(){
	float matriz[2][2];
	float otramatriz[2][2];
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j <2; j++){
			cout << "Coloque el valor de la fila "<< i+1 << " y coloque el valor de la columna " << j+1 << ": ";
			cin >> matriz[i][j];
			otramatriz[j][i] = matriz[i][j];
			}
	}
	cout << endl <<"Matriz ordenada:" << endl;
	for(i=0; i<1; i++){
		for(j=0; j <1; j++){
			cout << matriz[0][0] << matriz[0][1] << endl;
			cout << matriz[1][0] << matriz[1][1] << endl;
			}
	}
	
	cout << endl << "Matriz transpuesta: "<< endl;
	
	for(i=0; i<1; i++){
		for(j=0; j <1; j++){
			cout << otramatriz[0][0] << otramatriz[0][1] << endl;
			cout << otramatriz[1][0] << otramatriz[1][1] << endl;
			}
	}
}
