#include <iostream>
#include <conio.h>
using namespace std;

//funcion que permite cambiar los valores 
void mayor (int&, int&);

int main (){
	int n1, n2;
	//ingreso de los datos 
	cout <<"el valor del primer numero es:"<<endl;
	cin >> n1;
	cout <<"el valor del segundo numero es:" <<endl;
	cin >>n2;
	
	mayor (n1,n2);
	
	cout<< "Los valores se intercambian solo si el segundo es mayor que el primero"<<endl;
	
	cout<< "Ordenando valores......."<<endl;
	//imprime los nuevos valores 
	cout<<"\nEL nuevo valor del primer numero es:"<<n1<<endl;
	
	cout<<"El nuevo valor del segundo numero es:"<<n2<<endl;
	getch();
	return 0;
}

//cuerpo de la funcion
void mayor (int& n1, int& n2){
	int aux;
	
	//si se cumple la condicion se hara el intercambio de valores 
	if (n1 < n2)
	{
	aux = n1;
	n1 = n2;
	n2 = aux;
	}
	//sino queda tal como empezo 
	else {
		n1 = n1;
		n2 = n2;
	}
}
