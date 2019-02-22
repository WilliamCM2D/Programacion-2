#include <iostream>

void DemoLocal( int valor )
{
 cout << "Dentro de DemoLocal, valor =" << valor << endl;
 valor = 75;
 cout << "Dentro de DemoLocal, valor =" << valor << endl;
}
void main( void)
{
 int n = 10;
 cout << "Antes de llamar a DemoLocal, n= " << n << endl;
 DemoLocal(n);
 cout << "Después de llamar a DemoLocal, n= " << n << endl;
 cout << "Pulse Intro para continuar";
 cin.get();
}
//¿Cómo cambia el valor de n, si es que lo hace?
//Al llamar a DemoLocal el valor de n es remplazado por 75 
