// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	float a;
	float b;
	float circulo;
	float circunferencia;
	float cuadrado;
	float c�rculo;
	float h;
	int opc;
	float pi;
	float r;
	float triangulo;
	float tri�ngulo;
	cout << "Ingrese una opci�n" << endl;
	cout << "1: Calcular �rea del cuadrado" << endl;
	cout << "2: Calcular �rea del tri�ngulo" << endl;
	cout << "3: Calcular �rea de circunferencia" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		cout << "�rea del cuadrado" << endl;
		cout << "Ingrese el lado" << endl;
		cin >> a;
		cuadrado = a*a;
		cout << "El �rea es: " << cuadrado << endl;
		break;
	case 2:
		cout << "�rea del tri�ngulo" << endl;
		cout << "Ingrese la base" << endl;
		cin >> b;
		cout << "Ingrese la altura" << endl;
		cin >> h;
		triangulo = (b*h)/2;
		cout << "El �rea es: " << triangulo << endl;
		break;
	case 3:
		cout << "�rea del c�rculo" << endl;
		cout << "Ingrese el radio" << endl;
		cin >> r;
		circunferencia = M_PI*pow(r,2);
		cout << "El �rea es:" << circunferencia << endl;
		break;
	default:
		cout << "Opci�n inv�lida" << endl;
	}
	return 0;
}

