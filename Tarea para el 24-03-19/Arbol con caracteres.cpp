//William Alexander Chavez Marquez
//Carnet: CM18064
#include <iostream>
using namespace std;

struct nodo {
	char nro;
	struct nodo *izq, *der;
};

typedef struct nodo *ABB;//le pone un aliaz de struct nodo a ABB

void insertar(ABB &arbol,char x)//resive la direccion donde esta pasando arbol y la variable x 
{
	if (arbol==NULL)//pregunta si arbol es nulo 
	{
		ABB nuevonodo=new (struct nodo);//crea nodo
		nuevonodo->nro=x;
		nuevonodo->izq=NULL;//pone en nulo izq
		nuevonodo->der=NULL;//pone en nulo der
		arbol=nuevonodo;//remplaza direccion de memoria del nuevo nodo e el arbol
	}
	else if(x=='a','e','i','o','u')
		insertar(arbol->izq,x);
	else 
		insertar(arbol->der,x);
	
}

void verarbol(ABB arbol,int n)
{
	if (arbol==NULL)
		return;
	verarbol(arbol->der,n+1);//llama nodo derecho primero

	for (int i=0; i < n ; i++)
	{
		cout<<"        "<<endl;
	}
		cout<<arbol->nro<<endl;
		verarbol(arbol->izq,n+1);//llama a nodo izquierdo
}

void preorden(ABB arbol)
{
	if (arbol !=NULL)
	{
		cout<<arbol->nro<<" ";
		preorden(arbol->izq);
		preorden(arbol->der);
		
	}
}

int main()
{
	ABB arbol=NULL;
	char x;//dato insertado en el nodo
	int n;//numero de nodo
	cout <<"Arbol Binario"<<endl;
	cout <<"Ingrese el numero de nodos del arbol: "<<endl;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese el valor del nodo"<<endl;
		cin>>x;
		insertar(arbol,x);
	}
	cout <<"Mostrando el arbol";
	verarbol(arbol,n);
	cout <<"Mostrando el arbol en preorden";
	preorden(arbol);
	system("Pause");
	
	
	return 0;
}
