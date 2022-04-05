#include<iostream>
using namespace std;
int op;
int main()
{
	op = 1;
	while( op == 1)
	{
		cout << "                     BIOGRAFIA                         " << endl;
		cout << "Mi nombre es Eddy Nav�a Condori." << endl;
		cout << "Tengo 19 a�os, naci el 25 de mayo del 2003." << endl;
		cout << "Soy de la Carrera Ing. de Sistemas." << endl;
		cout << "Egrese del Colegio Nacional Jun�n." << endl;
		cout << "Se toca instrumentos musicales como la guitarra y el teclado." << endl;
		cout << "Tambien se cantar." << endl;
		cout << "Dirigo un ministerio de m�sica en la Capilla de la Virgen de la Medalla Milagrosa, de igual manera tambi�n soy catequista." << endl;
		cout << "Tengo conocientos basicos sobre lo que es la soldadura de metales." << endl;
		cout << "Doy clases de matematica escolar." << endl << endl;
		cout << "�Desea volver a correr el programa?" << endl;
		cout << "Presione 1. SI" << endl << "Presione 2. NO" << endl << endl;
		cin >> op;
		while (op <= 0 || op >= 3)
		{
			cout << "INGRESAR NUMEROS COMPRENDIDOS ENTRE 1 Y 2" << endl << endl << endl;
			cout << "�Desea volver a correr el programa? " << endl;
			cout << "Presione 1. SI" << endl << "Presione 2. NO" << endl << endl;
			cin >> op;  
		}
	}
	return 0;
}