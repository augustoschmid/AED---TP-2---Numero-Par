/* TP # 2 - Numero Par 
TOMAS AUGUSTO SCHMID
Ultima modificación: 19/04/2015

*/

#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main () {


int numero;
int numeroPar;

cout << "Ingrese un numero: ";
cin >> numero;

numeroPar = numero % 2;

if (numeroPar == 0) 
	{
	cout << "El numero ingresado es Par";
	}
else{

	cout << "El numero ingresado es Impar";
	}

}
