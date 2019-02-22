#include <stdio.h>
#include <conio.h>
void Intercambio(int, int);
void Intercambio(int *, int *);
void Intercambio(int, int &, int &);
void main() {
 int x = 22, y = 33;
 printf("x = %d\t y = %d\n", x, y);
 Intercambio(x,y); // llamada por valor
 printf("x = %d\t y = %d\n", x, y);
PROGRAMACION II (SISTEMAS)
 5
 Intercambio(1, x, y); // llamada por referencia
 printf("x = %d\t y = %d\n", x, y);
 Intercambio(&x, &y); // llamada por puntero
 printf("x = %d\t y = %d\n", x, y);
 getch();
}
void Intercambio( int a, int b)
{
 int aux;
 aux = a;
 a = b;
 b = aux;
}
void Intercambio(int *a, int *b)
{
 int aux;
 aux = *a;
 *a = *b;
 *b = aux;
}
void Intercambio( int i, int &a, int &b)
{
 int aux=i;
 aux = a;
 a = b;
 b = aux;
}

/*Como resultado de la llamada a Intercambio por valor (la primera llamada de Intercambio()), ¿se
cambian los valores de a y b? 
si 
¿por qué? los valores van cambiando en su totalidad


Después de la segunda llamada a Intercambio() (llamada por referencia), ¿hubo modificación de a
y b?
si
¿por qué? va mostrando el contenido de la variable con la que son igualadas


¿Es equivalente la tercer llamada a Intercambio() con la segunda llamada a la misma función?
no
¿por qué?
uno remplaza en su totalidad los valores y el otro muestra los contenido en vez de remplazarlos en su totalidad 
