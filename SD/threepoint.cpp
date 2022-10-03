#include <iostream>
using namespace std;

int main(){
	float matriz[3][3];
	float otramatriz[3][3];
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j <3; j++){
			cout << "Coloque el valor de la fila "<< i+1 << " y coloque el valor de la columna " << j+1 << ": ";
			cin >> matriz[i][j];
			otramatriz[j][i] = matriz[i][j];
			}
	}
	cout << endl <<"Matriz 3x3:" << endl;
	for(i=0; i<3; i++){
		for(j=0; j <3; j++){
			cout << matriz[i][j] << " ";
			}
			cout << endl;
	}
	
	return 0;
}
