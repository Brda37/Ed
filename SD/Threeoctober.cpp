#include <iostream>
using namespace std;

int main(){
	int integerRow, integerColumn, options, integerRowTwo, integerColumnTwo;
	int i, row, column;
	float matriz[integerRow][integerColumn];
	float matrizTwo[integerRowTwo][integerColumnTwo];
	float matriztotalSumAndRest0[integerRow][integerColumn];
	cout << "Ingrese la cantidad de las filas de la matriz 1: " ;
	cin >> integerRow;
	cout << "Ingrese la cantidad de las columnas de la matriz 1: ";
	cin >> integerColumn;
	cout << "Ingrese la cantidad de las filas de la matriz 2: " ;
	cin >> integerRowTwo;
	cout << "Ingrese la cantidad de las columnas de la matriz 2: ";
	cin >> integerColumnTwo;
	cout << endl;
	for(row=0; row<integerRow; row++){
		for(column=0;column<integerColumn; column++){
			cout << "En la matriz 1, ingrese de la fila " << row+1 << " en la columna " << column+1 << ": ";
			cin>>matriz[row][column]; 
		}
	}
	cout << endl << endl;
	for(row=0; row<integerRowTwo; row++){
		for(column=0;column<integerColumnTwo; column++){
			cout << "En la matriz 2, ingrese de la fila " << row+1 << " en la columna " << column+1 << ": ";
			cin>>matriz[row][column]; 
		}
	}
	
	cout << endl << "Que opcion necesita:";
	cout << "\n 1.Sumar \n 2.Restar \n 3.Multiplicar" << endl;
	cin >> options;
	
	
	switch(options){
		case 1:
			if(matriz[integerRow][integerColumn] !=  matrizTwo[integerRowTwo][integerColumnTwo]){
				cout << "Las matrices deben tener el mismo numeros de filas y columnas para poderse sumar: ";
			}
			else{
				
			}
		break;
		
	}
}
