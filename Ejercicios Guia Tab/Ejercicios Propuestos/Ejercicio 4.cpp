#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

//funcion que calcula el area de un cuadro
void AreaCuadrado ();
//funcion que calcula el area de un cubo
void AreaCubo ();
//funcion que pide un valor 
void pedirDatos ();

//varibles globales para mayor comodida
    double a , AreaC , Areacubo;

//cuerpo del programa
int main(){

	pedirDatos ();
	AreaCuadrado ();
	AreaCubo ();
	
   return 0;
}

//cuerpo del programa que pide los datos 
void pedirDatos ()
{
	cout <<"Digite la longitud de un lado: "<<endl;
	cin>>a;
}

//cuerpo del la funcion para calcula el area de un cadro
void AreaCuadrado ()
{
    AreaC = a * a;
    cout<<"Area del Cuadrado: " <<AreaC <<"cm cuadrados"<<endl;
}

//cuerpo de la funcion para calcular el area de un cubo  
void AreaCubo ()
{
	Areacubo = (a * a) * 6;
	cout <<"Area del Cubo: "<<Areacubo<< "cm cubicos"<<endl;
}
