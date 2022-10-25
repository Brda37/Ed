#include <iostream>
using namespace std;

	void duplica(int *x){
		*x = *x * *x;
	}
int main(){
	int n = 5;
	cout << "n vale " << endl << n;
	duplica (&n);
	cout << endl;
	cout << "Ahora n vale " << endl << n;
	return 0;
}
