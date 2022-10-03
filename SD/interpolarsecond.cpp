#include 
using namespace std;

int main(){
    float matriz[2][4];
    float otramatriz[4][2];
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j <4; j++){
            cout << "Coloque el valor de la fila "<< i+1 << " y coloque el valor de la columna " << j+1 << ": ";
            cin >> matriz[i][j];
            otramatriz[j][i] = matriz[i][j];
                        }
        }
        cout << endl <<"Matriz ordenada:" << endl;
        for(i=0; i<1; i++){
           	cout << matriz[0][0] << matriz[0][1] << matriz[0][2] << matriz[0][3] << endl;
			cout << matriz[1][0] << matriz[1][1] << matriz[1][2] << matriz[1][3] << endl;
        }
        
        cout << endl << "Matriz transpuesta: "<< endl;
        
        for(i=0; i<1; i++){
			cout << otramatriz[0][0] << otramatriz [0][1] << endl;
			cout << otramatriz[1][0] << otramatriz [1][1] << endl;
			cout << otramatriz[2][0] << otramatriz [2][1] << endl;
			cout << otramatriz[3][0] << otramatriz [3][1] << endl;
        }
}
