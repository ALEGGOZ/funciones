#include <string>
#include <iostream>
using namespace std;
//Declaramos prototios de funcines 
void menu();
int suma();
int resta();
int multi();
int divi();
void pausa();
int main()
{
	menu();
	return 0;
}
//creamos funciones 
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "calculadora de funciones" << endl;
		cout << "------------------------" << endl;
		cout << "\t1.- suma" << endl;
		cout << "\t2.- resta" << endl;
		cout << "\t3.- multi" << endl;
		cout << "\t4.- divi" << endl;
		cout << "\t5.- salir" << endl;
		cout << "elije una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
				break;
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multi();
			break;
		case '4':
			system("cls");
			divi();
			break;
		case '5':
			bandera = true;
			break;
		default:
			system("cls");
			cout << "opcion no valida" << endl;
			pausa();
			break;
		}

	} while (bandera != true);

}
void pausa()
{
	cout << endl << "pulsa culaquieer tecla para salir" << endl;
	getwchar();
	getwchar();
}
int suma()
{
	int a, b, suma;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	suma = a + b;
	cout << "la respuesta es; " << suma;
	pausa();
	return 0;
}
int resta()
{
	int a, b, resta;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	resta = a - b;
	cout << "la respuesta es; " << resta;
	pausa();
	return 0;
}
int multi()
{
	int a, b, multi;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	multi = a * b;
	cout << "la respuesta es; " << multi;
	pausa();
	return 0;
}
int divi()
{
	int a, b, divi;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	divi = a / b;
	cout << "la respuesta es; " << divi;
	pausa();
	return 0;
}