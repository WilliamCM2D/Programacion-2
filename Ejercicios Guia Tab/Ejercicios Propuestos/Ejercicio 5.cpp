#include <iostream>
#include <math.h>
//cuerpo del programa
using namespace std;

//funcion para hacer 0
void menorAcero();
//variables globales
int b;
int a;

int main()
{	
	cout<<"Ingrese el valor de su primer numero: "<<endl;
	cin>>a;
	cout<<"Ingrese el valor de su segundo numero: "<<endl;
    cin>>b;
	
   cout<<"El valor de su primer numero es: " << a <<endl;
   cout<<"El valor de su segundo numero es: " << b <<endl;
   //llama a la funcion
   menorAcero();
   //comando apra retornar a 0
  return 0;
}

void menorAcero()
{
	//verificacion si a es menor que b
    if (a<b)
    {	
    	cout << "El valor de su primer numero: " << a << " es menor que el segundo: " << b << endl;
    	cout << "Por lotanto su valor cambia a 0" << endl ;
    	a = 0;
    	
	}
	//verificacion si b es menor que a
	else if (b<a)
	{
		cout << "El valor del segundo: " << b << "es menor que primer numero: " << a << endl;
		cout << "Por lotanto su valor cambia a 0" << endl;
		b = 0;
		
	}

} 

