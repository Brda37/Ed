#include <iostream>
using namespace std;
int main(){
	int aux = 4;
	int *puntero = &aux;
	cout << "La direccion de memoria es: " << &puntero << endl;
	cout << "El valor es: " << *puntero;
	return 0;
}
