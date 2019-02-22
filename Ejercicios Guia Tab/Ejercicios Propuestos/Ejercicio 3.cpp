#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

//funcion que hace el calculo
void calcular (float x, float y);
//funcion que pide un valor 
void pedirDatos ();

//variables 
float base, exp , res=1;

//cuerpo del programa 
int main(){
	
	pedirDatos ();
	calcular (base, exp);
	
	getch();
	return 0;
}

//cuerpo del programa que pide los datos 
void pedirDatos ()
{
	cout <<"Digite la base: "<<endl;
	cin>>base;
	cout <<"Digite el exponente: "<<endl;
	cin>>exp;
}

//cuerpo de la funcion que hace el calculo 
void calcular (float x, float y){

	for (res = 1; exp > 0; exp--) res *= base;
	cout <<"El resultado es: "<< res << endl; 

}
