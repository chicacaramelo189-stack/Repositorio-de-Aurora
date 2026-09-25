#include <iostream>

using namespace std;
/*Aqui declaro variables,la variable char de caracter y la variable int de numero,
  pero no les establezo un valor,de eso se encarga cin,
cin se encarga de guardar datos en las variables,esto permite que lo que el usuario escriba,elija o haga se con una 
variable se guarde en esta
*/
int main(){
	char caracter;
	cout << "Introduce un caracter: " << endl;
	cin >> caracter;
	int numero;
	cout << "Introduce un numero entero" << endl;
	cin >> numero;
	cout << "Introduciste el caracter: " << caracter << " y el numero entero: " << numero << endl;
	
	/*Ejemplo de valores modificados*/
	
	int numero_1 = 10;
	cout << "La variable numero_1 es igual a " << numero_1 << "\n a continuacion escriba un nuevo valor de la variable" << endl;
	cin >> numero_1;
	cout << "El valor de la variable numero_1 ahora es igual a " << numero_1 << endl;
	cout << "Ahora sumemos el nuevo valor de la variable por el numero que usted quiera:" << endl;
	int variable_que_suma;
	cin >> variable_que_suma;
	int resultado_de_la_suma = variable_que_suma + numero_1;
	cout << "Bien sumastes " << variable_que_suma << " a " << numero_1 << "\n por lo tanto: " << numero_1 << " + " << variable_que_suma << " = " << resultado_de_la_suma << endl;
	return 0;
}
