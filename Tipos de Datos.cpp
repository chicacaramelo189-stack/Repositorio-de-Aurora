#include <iostream>

int main (){
	/*
	Aqui declaro las variables,
	son variables de distintos tipos
	Int: Entero,ocupa 4 bytes de memoria en este compilador de 32 bits,
	 su rango de valores es de -2147483648 a 2147483648 ( que patron que las 2 primeras decenas de
	derecha a izquierda sena impar y el resto de decenas no)
	
	Float: Se usa para numeros de punto flotante o decimales,
	 tiene un tamaño de 4 bytes y su rango de valores es de, 1.2E a 3.4E+38 y una precision de 6 digitos
	
	Long: Entero que se usa para valores muy altos y largos como indica el nombre, tiene un tamaño de
	 8 bytes de memoria su rango de valores esta de,
	 -92233372036854775808 a 92233372036854775808
	
	*/
	int numero;
	float numero_1;
	long suma123;
	int cuenta_de_suma;
	char _simbolo;
	
	numero = 2;
	numero_1 = 1.0f;
	suma123 = 1 + 2 + 3;
	cuenta_de_suma = suma123;
	_simbolo = 'A';
	/*
	
	Aqui programo con la libreria std (Standar) y su clase cout (abreviatura de ConsoleOut)
	para que imprima en la Consola de depuracion las variables que le ordene
	las palabra entre comillas dobles es un mensaje a voluntad,no hay variable detras
	mientras tanto el resto de llamadas que no estan entre comillas dobles,son las variables
	el operado << se encarga del desplazamiento a la izquierda bit a bit,esta antes de cada llamada
	de la variable para poder ser imprimido separado del resto
	el \n entre comillas luego del operador y la variables es para que la siguiente variables este en la 
	otra linea a si a la hora de ejecutar el codigo cada variables esta ordenada en su linea
	
	*/
	std::cout << "Tienes: " << "\n" << numero << "\n" << numero_1 << "\n" << cuenta_de_suma << "\n" << _simbolo << std::endl;
	return 0;
}
