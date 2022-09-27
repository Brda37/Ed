#include <iostream>
using namespace std;

int main(){
	float onematriz[2][2];
	float secondmatriz[2][2];
	float matriztotal[2][2];
	int i, j, k, l;
	float operations1[1], operations2[1], operations3[1], operations4[1];
	cout << "Primer vector 2x2: " << endl << endl;
	for(i=0; i<2; i++){
		for(j=0; j <2; j++){
			cout << "Coloque el valor de la fila "<< i+1 << " y coloque el valor de la columna " << j+1 << ": ";
			cin >> onematriz[i][j];
			}
	}
	cout <<endl << "Segundo vector 2x2: " << endl << endl;
	for(k=0; k<2; k++){
		for(l=0; l <2; l++){
			cout << "Coloque el valor de la fila "<< k+1 << " y coloque el valor de la columna " << l+1 << ": ";
			cin >> secondmatriz[k][l];
			}
	}
	for(i=0; i<1; i++){
	
	operations1[i] = (onematriz[0][0] * secondmatriz[0][0]) + (onematriz[0][1] * secondmatriz[1][0]);
	operations2[i] = (onematriz[0][0] * secondmatriz[0][1]) + (onematriz[0][1] * secondmatriz[1][1]);
	operations3[i] = (onematriz[1][0] * secondmatriz[0][0]) + (onematriz[1][1] * secondmatriz[1][0]);
	operations4[i] = (onematriz[1][0] * secondmatriz[0][1]) + (onematriz[1][1] * secondmatriz[1][1]);
	matriztotal[0][0] = operations1[i];
	matriztotal[1][0] = operations2[i];
	matriztotal[0][1] = operations3[i];
	matriztotal[1][1] = operations4[i];
	
	}
	cout << endl << "Multiplicacion matriz 2x2: " << endl;
	
	cout << matriztotal[0][0] << "  " << matriztotal[1][0] << endl;
	cout << matriztotal[0][1] << "  " << matriztotal[1][1];
	
	
}

