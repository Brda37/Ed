#include <iostream>
using namespace std;
int main (){
	struct{
		float cantidad;
		float agua;
		float sal;
		float aceite;
		float time;
		int terminado;
	}arroz;
	cout << "Cuantas tazas de arroz va a ingresar: ";
	cin >> arroz.cantidad;
	
	cout << endl << "Poner en una estufa una olla que le quepa todo a volumen de fuego normal" << endl;
	
	arroz.aceite = arroz.cantidad * 25;
	cout << "Anadir " << arroz.aceite << " mililitros de aceite a la olla" << endl;
	cout << "Ingresar guiso y condimentos al gusto" << endl;
	
	arroz.agua = arroz.cantidad * 2;
	cout << "Añadir " << arroz.agua << " tazas de agua del mismo tamaño de las tazas del arroz" << endl;
	
	arroz.sal = arroz.cantidad / 2;
	cout << "Debe adicionar "<< arroz.sal << " cucharada pequena de sal y revolver" << endl;
	cout << "Ingresar las "<< arroz.cantidad << " tazas de arroz y mezclar nuevamente y esperar que se seque el agua" << endl;
	
	arroz.time = arroz.cantidad * 10;
	cout << "Tapar la olla, bajar el volumen a lo menor posible y esperar "<< arroz.time << " minutos, apagar y servir";
	
	int terminado = 1;
	int *fin = &terminado;
	cout << endl << "Direccion de memoria del arroz terminado es: " << &terminado;
}
