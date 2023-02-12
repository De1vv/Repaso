// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cstdlib>
#include<sstream>
using namespace std;

// No hay en el C++ estandar una funcion equivalente a "convertiratexto", pero puede programarse una equivalente.
string convertiratexto(float f);

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	string a;
	string aprobadas;
	int calificacion;
	int calificación;
	string entrada;
	string r;
	string reprobadas;
	while (entrada!="salir") {
		cout << "Ingresar calificación" << endl;
		cin >> entrada;
		if (entrada!="salir") {
			calificacion = atof(entrada.c_str());
			if (calificacion>=70) {
				a = convertiratexto(calificacion);
				aprobadas = aprobadas+"|"+a;
				cout << aprobadas << endl;
			} else {
				r = convertiratexto(calificacion);
				reprobadas = reprobadas+"|"+r;
			}
		} else {
			cout << "Aprobadas: " << aprobadas << endl;
			cout << "Reprobadas: " << reprobadas << endl;
		}
	}
	return 0;
}


string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}

