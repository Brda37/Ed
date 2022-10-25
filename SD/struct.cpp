#include <iostream>
using namespace std;
int main(){
	struct{
		string name;
		char inicial;
		int year;
		float note;
	} person;
	person.name = "Juan";
	person.inicial = 'J';
	person.year = 23;
	person.note = 7.5;
	cout << "La edad es: " << person.year;
	return 0;
}
