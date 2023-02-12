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
// se leyó otra variable con >>.

int main() {
	float a;
	float b;
	float circulo;
	float circunferencia;
	float cuadrado;
	float círculo;
	float h;
	int opc;
	float pi;
	float r;
	float triangulo;
	float triángulo;
	cout << "Ingrese una opción" << endl;
	cout << "1: Calcular área del cuadrado" << endl;
	cout << "2: Calcular área del triángulo" << endl;
	cout << "3: Calcular área de circunferencia" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		cout << "Área del cuadrado" << endl;
		cout << "Ingrese el lado" << endl;
		cin >> a;
		cuadrado = a*a;
		cout << "El área es: " << cuadrado << endl;
		break;
	case 2:
		cout << "Área del triángulo" << endl;
		cout << "Ingrese la base" << endl;
		cin >> b;
		cout << "Ingrese la altura" << endl;
		cin >> h;
		triangulo = (b*h)/2;
		cout << "El área es: " << triangulo << endl;
		break;
	case 3:
		cout << "Área del círculo" << endl;
		cout << "Ingrese el radio" << endl;
		cin >> r;
		circunferencia = M_PI*pow(r,2);
		cout << "El área es:" << circunferencia << endl;
		break;
	default:
		cout << "Opción inválida" << endl;
	}
	return 0;
}

