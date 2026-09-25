#include <iostream>
#include <limits>

using namespace std;
/*
uso estas lineas para imprimir en consola el maximo y minimo rango de los tipos de datos: int,float,double y long
long y int estan separados por un espacio ya que long puede operar con otros tipos de datos
*/

int main (){
	cout << "Entero maximo: " << numeric_limits <int> :: max() << endl;
	cout << "Entero minimo: " << numeric_limits <int> :: min() << endl;
	cout << "Float maximo: " << numeric_limits <float> :: max() << endl;
	cout << "Float minimo: " << numeric_limits <float> :: min() << endl;
	cout << "Double maximo: " << numeric_limits <double> :: max() << endl;
	cout << "Double minimo: " << numeric_limits <double> :: min() << endl;
	cout << "Entero largo max.: " << numeric_limits <long int> :: max() << endl;
	cout << "Entero largo min.: " << numeric_limits <long int> :: min() << endl;
	return 0;
}
