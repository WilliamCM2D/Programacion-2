#include <iostream>
#include <conio.h>
using namespace std;
//funcion que permite multiplicar 
void mul (float x, float y);
//funcion que pide un valor 
void pedirDatos ();
//variables
	float  n1, n2=10;

//cuerpo del programa 
int main (){
	
	pedirDatos();
	mul (n1, n2);
	
	getch();
	return 0;
}

//cuerpo de la funcion que pide los datos
void pedirDatos ()
{
	cout <<"Digite un numero: ";
	cin>>n1;
}

//cuerpo de la funcion q hace la multiplicacion
void mul (float x, float y){

	float multiplicacion = x * y;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl; 

}
