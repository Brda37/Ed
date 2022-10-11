#include <iostream>
using namespace std;

int main(){
	int colum=0, row=0, colum_two=0, row_two=0, i, j, k, operation=0, repeat=1;
	float matrizone[100][100];
	float matriztwo[100][100];
	float matrizresult[100][100];
	do{
		
		cout << endl << "Ingrese de la matriz 1 la cantidad de filas: ";
		cin >> row;
		cout << "Ingrese de la matriz 1 la cantidad de columnas: ";
		cin >> colum;
		cout << endl << "Ingrese de la matriz 2 la cantidad de filas: ";
		cin >> row_two;
		cout << "Ingrese de la matriz 2 la cantidad de columna: ";
		cin >> colum_two;
		if(row <=0 || row_two <=0 || colum <=0 || colum_two <=0){
			cout << endl <<"El tamaño de los arreglos no pueden ser negativos o ceros" << endl;
		}
		else{
		cout << endl << endl;
		
		for(i=0; i<row; i++){
			for(j=0; j<colum; j++){
				cout << "En la matriz 1, ingrese en la fila " << i+1 << " el dato de la columna " << j+1 << ": ";
				cin >> matrizone[i][j];
			}
		}
		
		cout << endl;
		
		for(i=0; i<row_two; i++){
			for(j=0; j<colum_two; j++){
				cout << "En la matriz 2, ingrese en la fila " << i+1 << " el dato de la columna " << j+1 << ": ";
				cin >> matriztwo[i][j];
			}
		}
		
		cout << endl << "Matriz 1: " << endl;
		
		for(i=0; i<row; i++){
			for(j=0; j<colum; j++){
				cout << matrizone[i][j] << " ";
			}cout << endl;
		}
		
		cout << endl << "Matriz 2: " << endl;
		
		for(i=0; i< row_two; i++){
			for(j=0; j<colum_two;j++){
				cout << matriztwo[i][j] << " ";
			}
			cout << endl;
		}
		//Hasta esta parte es solo solicitud de datos y mostrar las matrices
	
		cout << endl;
		
		if(colum == row && colum_two == row_two && colum == row_two){
			cout << "Operaciones permitidas: " << endl << endl;
			cout << "1. Sumar." << endl << "2. Restar." << endl << "3. Multiplicar" << endl;
			cout << endl << "Que operacion va a realizar: ";
			cin >> operation;
			cout << endl;
			
			switch(operation){
				
				case 1:
				cout << endl << "La suma de las matrices es: " << endl << endl;
				for(i=0; i<row; i++){
					for(j=0; j<colum; j++){
						matrizresult[i][j] = matrizone[i][j] + matriztwo[i][j];
						cout << matrizresult[i][j] << " "; 
					}cout << endl;
				}		
				break;
				
				case 2:
				cout << endl << "La resta de las matrices es: " << endl << endl;
				for(i=0; i<row; i++){
					for(j=0; j<colum; j++){
						matrizresult[i][j] = matrizone[i][j] - matriztwo[i][j];
						cout << matrizresult[i][j] << " "; 
					}cout << endl;
				}		
				break;
				
				case 3:
				cout << endl << "La multiplicacion de las matrices es: " << endl << endl;
				for(i=0; i<row; i++){
					for(j=0; j<colum_two; j++){
						matrizresult[i][j]=0;
						for(k=0; k<colum;k++){
							matrizresult[i][j] += matrizone[i][k] * matriztwo[k][j];
							
						}cout << matrizresult[i][j] << " ";
					}cout << endl;
				}
				break;
				
				default:
				cout << endl <<"Opcion incorrecta." << endl;
			}
		}
		else if(colum == colum_two && row == row_two && colum != row){
			
			cout << "Operaciones permitidas: " << endl << endl;
			cout << "1. Sumar." << endl << "2. Restar." << endl;
			cout << endl << "Que operacion va a realizar: ";
			cin >> operation;
			cout << endl;
			
			switch(operation){
				
			case 1:
				cout << endl << "La suma de las matrices es: " << endl << endl;
				for(i=0; i<row; i++){
					for(j=0; j<colum; j++){
						matrizresult[i][j] = matrizone[i][j] + matriztwo[i][j];
						cout << matrizresult[i][j] << " "; 
					}cout << endl;
				}		
				break;
				
				case 2:
				cout << endl << "La resta de las matrices es: " << endl << endl;
				for(i=0; i<row; i++){
					for(j=0; j<colum; j++){
						matrizresult[i][j] = matrizone[i][j] - matriztwo[i][j];
						cout << matrizresult[i][j] << " "; 
					}cout << endl;
				}
				break;
				
				default:
				cout << endl <<"Opcion incorrecta." << endl;
			}
		}
		else if(colum == row_two){
			
			cout << "Para sumar o restar estas deben ser del mismo tamaño en filas y columnas" << endl;
			cout << "Las matrices ingresadas solo se pueden multiplicar" << endl;
			cout << "La multiplicacion: ";
					
			for(i=0; i<row;i++){
				for(j=0; j<colum_two; j++){
					matrizresult[i][j]=0;
					for(k=0; k<colum; k++){
						matrizresult[i][j] += matrizone[i][k] * matriztwo[k][j];
					}
				}
			}
			
			for(i=0; i<row; i++){
				for(j=0; j<colum_two; j++){
					cout << matrizresult[i][j] << " ";
				}
				cout << endl;
			}
		}
		
		else{
			cout << endl << "La matriz 1 de dimension [" <<row<< "]["<<colum<< "]";
			cout << endl <<"La matriz 2 de dimension [" <<row_two<< "]["<<colum_two<< "]";
			cout << endl <<"No se pueden sumar, restar ni multiplicar" << endl;
		}
	}
		cout << endl << "\n Marque 1 si desea ingresar otras matrices para calcular: " << endl;
		cin >> repeat;
	}while(repeat==1);
}
